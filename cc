@-moz-keyframes spinner-loader {
  0% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@-webkit-keyframes spinner-loader {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@keyframes spinner-loader {
  0% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    -ms-transform: rotate(360deg);
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.spinner-loader:not(:required) {
  -moz-animation: spinner-loader 1500ms infinite linear;
  -webkit-animation: spinner-loader 1500ms infinite linear;
  animation: spinner-loader 1500ms infinite linear;
  -moz-border-radius: 0.5em;
  -webkit-border-radius: 0.5em;
  border-radius: 0.5em;
  -moz-box-shadow: rgba(0, 0, 51, 0.3) 1.5em 0 0 0, rgba(0, 0, 51, 0.3) 1.1em 1.1em 0 0, rgba(0, 0, 51, 0.3) 0 1.5em 0 0, rgba(0, 0, 51, 0.3) -1.1em 1.1em 0 0, rgba(0, 0, 51, 0.3) -1.5em 0 0 0, rgba(0, 0, 51, 0.3) -1.1em -1.1em 0 0, rgba(0, 0, 51, 0.3) 0 -1.5em 0 0, rgba(0, 0, 51, 0.3) 1.1em -1.1em 0 0;
  -webkit-box-shadow: rgba(0, 0, 51, 0.3) 1.5em 0 0 0, rgba(0, 0, 51, 0.3) 1.1em 1.1em 0 0, rgba(0, 0, 51, 0.3) 0 1.5em 0 0, rgba(0, 0, 51, 0.3) -1.1em 1.1em 0 0, rgba(0, 0, 51, 0.3) -1.5em 0 0 0, rgba(0, 0, 51, 0.3) -1.1em -1.1em 0 0, rgba(0, 0, 51, 0.3) 0 -1.5em 0 0, rgba(0, 0, 51, 0.3) 1.1em -1.1em 0 0;
  box-shadow: rgba(0, 0, 51, 0.3) 1.5em 0 0 0, rgba(0, 0, 51, 0.3) 1.1em 1.1em 0 0, rgba(0, 0, 51, 0.3) 0 1.5em 0 0, rgba(0, 0, 51, 0.3) -1.1em 1.1em 0 0, rgba(0, 0, 51, 0.3) -1.5em 0 0 0, rgba(0, 0, 51, 0.3) -1.1em -1.1em 0 0, rgba(0, 0, 51, 0.3) 0 -1.5em 0 0, rgba(0, 0, 51, 0.3) 1.1em -1.1em 0 0;
  display: inline-block;
  font-size: 10px;
  width: 1em;
  height: 1em;
  margin: 1.5em;
  overflow: hidden;
  text-indent: 100%;
}

@-moz-keyframes refreshing-loader {
  0% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@-webkit-keyframes refreshing-loader {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@keyframes refreshing-loader {
  0% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    -ms-transform: rotate(360deg);
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.refreshing-loader:not(:required) {
  -moz-animation: refreshing-loader 1000ms infinite linear;
  -webkit-animation: refreshing-loader 1000ms infinite linear;
  animation: refreshing-loader 1000ms infinite linear;
  -moz-border-radius: 2.4em;
  -webkit-border-radius: 2.4em;
  border-radius: 2.4em;
  border: 0.4em solid #9ac;
  border-left-color: transparent;
  color: transparent;
  display: inline-block;
  font-size: 10px;
  line-height: 1.2;
  width: 3em;
  height: 3em;
  text-indent: 100%;
}
.refreshing-loader:not(:required):after {
  display: block;
  border: 0.5em solid transparent;
  border-top-color: #9ac;
  border-left-color: #9ac;
  content: '';
  width: 0;
  height: 0;
  overflow: hidden;
  margin-left: -0.2em;
  margin-top: 1em;
}

@-moz-keyframes throbber-loader {
  0% {
    background: #dde2e7;
  }
  10% {
    background: #6b9dc8;
  }
  40% {
    background: #dde2e7;
  }
}
@-webkit-keyframes throbber-loader {
  0% {
    background: #dde2e7;
  }
  10% {
    background: #6b9dc8;
  }
  40% {
    background: #dde2e7;
  }
}
@keyframes throbber-loader {
  0% {
    background: #dde2e7;
  }
  10% {
    background: #6b9dc8;
  }
  40% {
    background: #dde2e7;
  }
}
/* :not(:required) hides these rules from IE9 and below */
.throbber-loader:not(:required) {
  -moz-animation: throbber-loader 2000ms 300ms infinite ease-out;
  -webkit-animation: throbber-loader 2000ms 300ms infinite ease-out;
  animation: throbber-loader 2000ms 300ms infinite ease-out;
  background: #dde2e7;
  display: inline-block;
  position: relative;
  text-indent: -9999px;
  width: 0.9em;
  height: 1.5em;
  margin: 0 1.6em;
}
.throbber-loader:not(:required):before, .throbber-loader:not(:required):after {
  background: #dde2e7;
  content: '\x200B';
  display: inline-block;
  width: 0.9em;
  height: 1.5em;
  position: absolute;
  top: 0;
}
.throbber-loader:not(:required):before {
  -moz-animation: throbber-loader 2000ms 150ms infinite ease-out;
  -webkit-animation: throbber-loader 2000ms 150ms infinite ease-out;
  animation: throbber-loader 2000ms 150ms infinite ease-out;
  left: -1.6em;
}
.throbber-loader:not(:required):after {
  -moz-animation: throbber-loader 2000ms 450ms infinite ease-out;
  -webkit-animation: throbber-loader 2000ms 450ms infinite ease-out;
  animation: throbber-loader 2000ms 450ms infinite ease-out;
  right: -1.6em;
}

@-moz-keyframes heartbeat-loader {
  0% {
    -moz-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
  14% {
    -moz-transform: rotate(45deg) scale(1.3);
    transform: rotate(45deg) scale(1.3);
  }
  28% {
    -moz-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
  42% {
    -moz-transform: rotate(45deg) scale(1.3);
    transform: rotate(45deg) scale(1.3);
  }
  70% {
    -moz-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
}
@-webkit-keyframes heartbeat-loader {
  0% {
    -webkit-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
  14% {
    -webkit-transform: rotate(45deg) scale(1.3);
    transform: rotate(45deg) scale(1.3);
  }
  28% {
    -webkit-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
  42% {
    -webkit-transform: rotate(45deg) scale(1.3);
    transform: rotate(45deg) scale(1.3);
  }
  70% {
    -webkit-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
}
@keyframes heartbeat-loader {
  0% {
    -moz-transform: rotate(45deg) scale(1);
    -ms-transform: rotate(45deg) scale(1);
    -webkit-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
  14% {
    -moz-transform: rotate(45deg) scale(1.3);
    -ms-transform: rotate(45deg) scale(1.3);
    -webkit-transform: rotate(45deg) scale(1.3);
    transform: rotate(45deg) scale(1.3);
  }
  28% {
    -moz-transform: rotate(45deg) scale(1);
    -ms-transform: rotate(45deg) scale(1);
    -webkit-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
  42% {
    -moz-transform: rotate(45deg) scale(1.3);
    -ms-transform: rotate(45deg) scale(1.3);
    -webkit-transform: rotate(45deg) scale(1.3);
    transform: rotate(45deg) scale(1.3);
  }
  70% {
    -moz-transform: rotate(45deg) scale(1);
    -ms-transform: rotate(45deg) scale(1);
    -webkit-transform: rotate(45deg) scale(1);
    transform: rotate(45deg) scale(1);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.heartbeat-loader:not(:required) {
  -moz-animation: heartbeat-loader 1300ms ease 0s infinite normal;
  -webkit-animation: heartbeat-loader 1300ms ease 0s infinite normal;
  animation: heartbeat-loader 1300ms ease 0s infinite normal;
  display: inline-block;
  position: relative;
  overflow: hidden;
  text-indent: -9999px;
  width: 36px;
  height: 36px;
  -moz-transform: rotate(45deg) scale(1);
  -ms-transform: rotate(45deg) scale(1);
  -webkit-transform: rotate(45deg) scale(1);
  transform: rotate(45deg) scale(1);
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  -webkit-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
}
.heartbeat-loader:not(:required):after, .heartbeat-loader:not(:required):before {
  position: absolute;
  content: "";
  background: #e87;
}
.heartbeat-loader:not(:required):before {
  -moz-border-radius-topleft: 12px;
  -webkit-border-top-left-radius: 12px;
  border-top-left-radius: 12px;
  -moz-border-radius-bottomleft: 12px;
  -webkit-border-bottom-left-radius: 12px;
  border-bottom-left-radius: 12px;
  top: 12px;
  left: 0;
  width: 36px;
  height: 24px;
}
.heartbeat-loader:not(:required):after {
  -moz-border-radius-topleft: 12px;
  -webkit-border-top-left-radius: 12px;
  border-top-left-radius: 12px;
  -moz-border-radius-topright: 12px;
  -webkit-border-top-right-radius: 12px;
  border-top-right-radius: 12px;
  top: 0;
  left: 12px;
  width: 24px;
  height: 12px;
}

@-moz-keyframes gauge-loader {
  0% {
    -moz-transform: rotate(-50deg);
    transform: rotate(-50deg);
  }
  10% {
    -moz-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  20% {
    -moz-transform: rotate(60deg);
    transform: rotate(60deg);
  }
  24% {
    -moz-transform: rotate(60deg);
    transform: rotate(60deg);
  }
  40% {
    -moz-transform: rotate(-20deg);
    transform: rotate(-20deg);
  }
  54% {
    -moz-transform: rotate(70deg);
    transform: rotate(70deg);
  }
  56% {
    -moz-transform: rotate(78deg);
    transform: rotate(78deg);
  }
  58% {
    -moz-transform: rotate(73deg);
    transform: rotate(73deg);
  }
  60% {
    -moz-transform: rotate(75deg);
    transform: rotate(75deg);
  }
  62% {
    -moz-transform: rotate(70deg);
    transform: rotate(70deg);
  }
  70% {
    -moz-transform: rotate(-20deg);
    transform: rotate(-20deg);
  }
  80% {
    -moz-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  83% {
    -moz-transform: rotate(25deg);
    transform: rotate(25deg);
  }
  86% {
    -moz-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  89% {
    -moz-transform: rotate(25deg);
    transform: rotate(25deg);
  }
  100% {
    -moz-transform: rotate(-50deg);
    transform: rotate(-50deg);
  }
}
@-webkit-keyframes gauge-loader {
  0% {
    -webkit-transform: rotate(-50deg);
    transform: rotate(-50deg);
  }
  10% {
    -webkit-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  20% {
    -webkit-transform: rotate(60deg);
    transform: rotate(60deg);
  }
  24% {
    -webkit-transform: rotate(60deg);
    transform: rotate(60deg);
  }
  40% {
    -webkit-transform: rotate(-20deg);
    transform: rotate(-20deg);
  }
  54% {
    -webkit-transform: rotate(70deg);
    transform: rotate(70deg);
  }
  56% {
    -webkit-transform: rotate(78deg);
    transform: rotate(78deg);
  }
  58% {
    -webkit-transform: rotate(73deg);
    transform: rotate(73deg);
  }
  60% {
    -webkit-transform: rotate(75deg);
    transform: rotate(75deg);
  }
  62% {
    -webkit-transform: rotate(70deg);
    transform: rotate(70deg);
  }
  70% {
    -webkit-transform: rotate(-20deg);
    transform: rotate(-20deg);
  }
  80% {
    -webkit-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  83% {
    -webkit-transform: rotate(25deg);
    transform: rotate(25deg);
  }
  86% {
    -webkit-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  89% {
    -webkit-transform: rotate(25deg);
    transform: rotate(25deg);
  }
  100% {
    -webkit-transform: rotate(-50deg);
    transform: rotate(-50deg);
  }
}
@keyframes gauge-loader {
  0% {
    -moz-transform: rotate(-50deg);
    -ms-transform: rotate(-50deg);
    -webkit-transform: rotate(-50deg);
    transform: rotate(-50deg);
  }
  10% {
    -moz-transform: rotate(20deg);
    -ms-transform: rotate(20deg);
    -webkit-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  20% {
    -moz-transform: rotate(60deg);
    -ms-transform: rotate(60deg);
    -webkit-transform: rotate(60deg);
    transform: rotate(60deg);
  }
  24% {
    -moz-transform: rotate(60deg);
    -ms-transform: rotate(60deg);
    -webkit-transform: rotate(60deg);
    transform: rotate(60deg);
  }
  40% {
    -moz-transform: rotate(-20deg);
    -ms-transform: rotate(-20deg);
    -webkit-transform: rotate(-20deg);
    transform: rotate(-20deg);
  }
  54% {
    -moz-transform: rotate(70deg);
    -ms-transform: rotate(70deg);
    -webkit-transform: rotate(70deg);
    transform: rotate(70deg);
  }
  56% {
    -moz-transform: rotate(78deg);
    -ms-transform: rotate(78deg);
    -webkit-transform: rotate(78deg);
    transform: rotate(78deg);
  }
  58% {
    -moz-transform: rotate(73deg);
    -ms-transform: rotate(73deg);
    -webkit-transform: rotate(73deg);
    transform: rotate(73deg);
  }
  60% {
    -moz-transform: rotate(75deg);
    -ms-transform: rotate(75deg);
    -webkit-transform: rotate(75deg);
    transform: rotate(75deg);
  }
  62% {
    -moz-transform: rotate(70deg);
    -ms-transform: rotate(70deg);
    -webkit-transform: rotate(70deg);
    transform: rotate(70deg);
  }
  70% {
    -moz-transform: rotate(-20deg);
    -ms-transform: rotate(-20deg);
    -webkit-transform: rotate(-20deg);
    transform: rotate(-20deg);
  }
  80% {
    -moz-transform: rotate(20deg);
    -ms-transform: rotate(20deg);
    -webkit-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  83% {
    -moz-transform: rotate(25deg);
    -ms-transform: rotate(25deg);
    -webkit-transform: rotate(25deg);
    transform: rotate(25deg);
  }
  86% {
    -moz-transform: rotate(20deg);
    -ms-transform: rotate(20deg);
    -webkit-transform: rotate(20deg);
    transform: rotate(20deg);
  }
  89% {
    -moz-transform: rotate(25deg);
    -ms-transform: rotate(25deg);
    -webkit-transform: rotate(25deg);
    transform: rotate(25deg);
  }
  100% {
    -moz-transform: rotate(-50deg);
    -ms-transform: rotate(-50deg);
    -webkit-transform: rotate(-50deg);
    transform: rotate(-50deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.gauge-loader:not(:required) {
  background: #6ca;
  -moz-border-radius-topleft: 32px;
  -webkit-border-top-left-radius: 32px;
  border-top-left-radius: 32px;
  -moz-border-radius-topright: 32px;
  -webkit-border-top-right-radius: 32px;
  border-top-right-radius: 32px;
  display: inline-block;
  width: 64px;
  height: 32px;
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
}
.gauge-loader:not(:required)::before {
  -moz-animation: gauge-loader 4000ms infinite ease;
  -webkit-animation: gauge-loader 4000ms infinite ease;
  animation: gauge-loader 4000ms infinite ease;
  background: white;
  -moz-border-radius: 2px;
  -webkit-border-radius: 2px;
  border-radius: 2px;
  content: '';
  position: absolute;
  left: 30px;
  top: 5.33333px;
  width: 4px;
  height: 26.66667px;
  -moz-transform-origin: 50% 100%;
  -ms-transform-origin: 50% 100%;
  -webkit-transform-origin: 50% 100%;
  transform-origin: 50% 100%;
}
.gauge-loader:not(:required)::after {
  content: '';
  background: white;
  -moz-border-radius: 8px;
  -webkit-border-radius: 8px;
  border-radius: 8px;
  position: absolute;
  left: 25.6px;
  top: 25.6px;
  width: 12.8px;
  height: 12.8px;
}

@-moz-keyframes timer-loader {
  0% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@-webkit-keyframes timer-loader {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@keyframes timer-loader {
  0% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    -ms-transform: rotate(360deg);
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.timer-loader:not(:required) {
  border: 6px solid #c8d;
  -moz-border-radius: 24px;
  -webkit-border-radius: 24px;
  border-radius: 24px;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  box-sizing: border-box;
  display: inline-block;
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
  width: 48px;
  height: 48px;
}
.timer-loader:not(:required)::before {
  -moz-animation: timer-loader 1250ms infinite linear;
  -webkit-animation: timer-loader 1250ms infinite linear;
  animation: timer-loader 1250ms infinite linear;
  -moz-transform-origin: 3px 3px;
  -ms-transform-origin: 3px 3px;
  -webkit-transform-origin: 3px 3px;
  transform-origin: 3px 3px;
  background: #c8d;
  -moz-border-radius: 3px;
  -webkit-border-radius: 3px;
  border-radius: 3px;
  content: '';
  display: block;
  position: absolute;
  width: 6px;
  height: 19.2px;
  left: 15px;
  top: 15px;
}
.timer-loader:not(:required)::after {
  -moz-animation: timer-loader 15000ms infinite linear;
  -webkit-animation: timer-loader 15000ms infinite linear;
  animation: timer-loader 15000ms infinite linear;
  -moz-transform-origin: 3px 3px;
  -ms-transform-origin: 3px 3px;
  -webkit-transform-origin: 3px 3px;
  transform-origin: 3px 3px;
  background: #c8d;
  -moz-border-radius: 3px;
  -webkit-border-radius: 3px;
  border-radius: 3px;
  content: '';
  display: block;
  position: absolute;
  width: 6px;
  height: 16px;
  left: 15px;
  top: 15px;
}

@-moz-keyframes three-quarters-loader {
  0% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@-webkit-keyframes three-quarters-loader {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@keyframes three-quarters-loader {
  0% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    -ms-transform: rotate(360deg);
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.three-quarters-loader:not(:required) {
  -moz-animation: three-quarters-loader 1250ms infinite linear;
  -webkit-animation: three-quarters-loader 1250ms infinite linear;
  animation: three-quarters-loader 1250ms infinite linear;
  border: 2px solid #ffffff;
  border-right-color: transparent;
  border-radius: 16px;
  box-sizing: border-box;
  display: inline-block;
  position: relative;
  overflow: hidden;
  text-indent: -9999px;
  width: 10px;
  height: 10px;
  margin-right:5px;
}

@-moz-keyframes wobblebar-loader {
  0% {
    left: 4px;
  }
  3% {
    left: 104px;
  }
  6% {
    left: 4px;
  }
  9% {
    left: 104px;
  }
  12% {
    left: 4px;
  }
  15% {
    left: 104px;
  }
  18% {
    left: 32px;
  }
  27% {
    left: 32px;
  }
  30% {
    left: 104px;
  }
  33% {
    left: 4px;
  }
  36% {
    left: 104px;
  }
  39% {
    left: 4px;
  }
  42% {
    left: 104px;
  }
  45% {
    left: 4px;
  }
  48% {
    left: 104px;
  }
  51% {
    left: 52px;
  }
  63% {
    left: 52px;
  }
  66% {
    left: 4px;
  }
  69% {
    left: 104px;
  }
  72% {
    left: 4px;
  }
  75% {
    left: 104px;
  }
  78% {
    left: 4px;
  }
  81% {
    left: 104px;
  }
  84% {
    left: 72px;
  }
  94% {
    left: 72px;
  }
  97% {
    left: 104px;
  }
}
@-webkit-keyframes wobblebar-loader {
  0% {
    left: 4px;
  }
  3% {
    left: 104px;
  }
  6% {
    left: 4px;
  }
  9% {
    left: 104px;
  }
  12% {
    left: 4px;
  }
  15% {
    left: 104px;
  }
  18% {
    left: 32px;
  }
  27% {
    left: 32px;
  }
  30% {
    left: 104px;
  }
  33% {
    left: 4px;
  }
  36% {
    left: 104px;
  }
  39% {
    left: 4px;
  }
  42% {
    left: 104px;
  }
  45% {
    left: 4px;
  }
  48% {
    left: 104px;
  }
  51% {
    left: 52px;
  }
  63% {
    left: 52px;
  }
  66% {
    left: 4px;
  }
  69% {
    left: 104px;
  }
  72% {
    left: 4px;
  }
  75% {
    left: 104px;
  }
  78% {
    left: 4px;
  }
  81% {
    left: 104px;
  }
  84% {
    left: 72px;
  }
  94% {
    left: 72px;
  }
  97% {
    left: 104px;
  }
}
@keyframes wobblebar-loader {
  0% {
    left: 4px;
  }
  3% {
    left: 104px;
  }
  6% {
    left: 4px;
  }
  9% {
    left: 104px;
  }
  12% {
    left: 4px;
  }
  15% {
    left: 104px;
  }
  18% {
    left: 32px;
  }
  27% {
    left: 32px;
  }
  30% {
    left: 104px;
  }
  33% {
    left: 4px;
  }
  36% {
    left: 104px;
  }
  39% {
    left: 4px;
  }
  42% {
    left: 104px;
  }
  45% {
    left: 4px;
  }
  48% {
    left: 104px;
  }
  51% {
    left: 52px;
  }
  63% {
    left: 52px;
  }
  66% {
    left: 4px;
  }
  69% {
    left: 104px;
  }
  72% {
    left: 4px;
  }
  75% {
    left: 104px;
  }
  78% {
    left: 4px;
  }
  81% {
    left: 104px;
  }
  84% {
    left: 72px;
  }
  94% {
    left: 72px;
  }
  97% {
    left: 104px;
  }
}
/* :not(:required) hides this rule from IE9 and below */
.wobblebar-loader:not(:required) {
  background: #a9d;
  -moz-border-radius: 10.66667px;
  -webkit-border-radius: 10.66667px;
  border-radius: 10.66667px;
  display: inline-block;
  overflow: hidden;
  text-indent: -9999px;
  width: 128px;
  height: 21.33333px;
  position: relative;
}
.wobblebar-loader:not(:required)::after {
  -moz-animation: wobblebar-loader 15000ms infinite ease;
  -webkit-animation: wobblebar-loader 15000ms infinite ease;
  animation: wobblebar-loader 15000ms infinite ease;
  background: white;
  display: block;
  -moz-border-radius: 7.11111px;
  -webkit-border-radius: 7.11111px;
  border-radius: 7.11111px;
  content: '';
  position: absolute;
  top: 3.55556px;
  left: 4px;
  width: 21.33333px;
  height: 14.22222px;
}

@-moz-keyframes atebits-loader {
  0% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  3% {
    -moz-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  10% {
    -moz-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  13% {
    -moz-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  20% {
    -moz-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  23% {
    -moz-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  30% {
    -moz-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  33% {
    -moz-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  40% {
    -moz-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  43% {
    -moz-transform: rotate(270deg);
    transform: rotate(270deg);
  }
  50% {
    -moz-transform: rotate(270deg);
    transform: rotate(270deg);
  }
  53% {
    -moz-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  60% {
    -moz-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  63% {
    -moz-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  70% {
    -moz-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  73% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  80% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  83% {
    -moz-transform: rotate(-90deg);
    transform: rotate(-90deg);
  }
  90% {
    -moz-transform: rotate(-90deg);
    transform: rotate(-90deg);
  }
  93% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
}
@-webkit-keyframes atebits-loader {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  3% {
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  10% {
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  13% {
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  20% {
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  23% {
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  30% {
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  33% {
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  40% {
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  43% {
    -webkit-transform: rotate(270deg);
    transform: rotate(270deg);
  }
  50% {
    -webkit-transform: rotate(270deg);
    transform: rotate(270deg);
  }
  53% {
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  60% {
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  63% {
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  70% {
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  73% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  80% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  83% {
    -webkit-transform: rotate(-90deg);
    transform: rotate(-90deg);
  }
  90% {
    -webkit-transform: rotate(-90deg);
    transform: rotate(-90deg);
  }
  93% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
}
@keyframes atebits-loader {
  0% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  3% {
    -moz-transform: rotate(90deg);
    -ms-transform: rotate(90deg);
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  10% {
    -moz-transform: rotate(90deg);
    -ms-transform: rotate(90deg);
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  13% {
    -moz-transform: rotate(180deg);
    -ms-transform: rotate(180deg);
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  20% {
    -moz-transform: rotate(180deg);
    -ms-transform: rotate(180deg);
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  23% {
    -moz-transform: rotate(90deg);
    -ms-transform: rotate(90deg);
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  30% {
    -moz-transform: rotate(90deg);
    -ms-transform: rotate(90deg);
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  33% {
    -moz-transform: rotate(180deg);
    -ms-transform: rotate(180deg);
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  40% {
    -moz-transform: rotate(180deg);
    -ms-transform: rotate(180deg);
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  43% {
    -moz-transform: rotate(270deg);
    -ms-transform: rotate(270deg);
    -webkit-transform: rotate(270deg);
    transform: rotate(270deg);
  }
  50% {
    -moz-transform: rotate(270deg);
    -ms-transform: rotate(270deg);
    -webkit-transform: rotate(270deg);
    transform: rotate(270deg);
  }
  53% {
    -moz-transform: rotate(180deg);
    -ms-transform: rotate(180deg);
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  60% {
    -moz-transform: rotate(180deg);
    -ms-transform: rotate(180deg);
    -webkit-transform: rotate(180deg);
    transform: rotate(180deg);
  }
  63% {
    -moz-transform: rotate(90deg);
    -ms-transform: rotate(90deg);
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  70% {
    -moz-transform: rotate(90deg);
    -ms-transform: rotate(90deg);
    -webkit-transform: rotate(90deg);
    transform: rotate(90deg);
  }
  73% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  80% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  83% {
    -moz-transform: rotate(-90deg);
    -ms-transform: rotate(-90deg);
    -webkit-transform: rotate(-90deg);
    transform: rotate(-90deg);
  }
  90% {
    -moz-transform: rotate(-90deg);
    -ms-transform: rotate(-90deg);
    -webkit-transform: rotate(-90deg);
    transform: rotate(-90deg);
  }
  93% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.atebits-loader:not(:required) {
  background: rgba(0, 0, 0, 0.5);
  display: inline-block;
  width: 9px;
  height: 9px;
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
  -moz-box-shadow: rgba(0, 0, 0, 0.5) -12px -12px 0 0, rgba(0, 0, 0, 0.5) 12px -12px 0 0, rgba(0, 0, 0, 0.5) -12px 0 0 0, rgba(0, 0, 0, 0.5) 12px 0 0 0, rgba(0, 0, 0, 0.5) -12px 12px 0 0, rgba(0, 0, 0, 0.5) 0 12px 0 0, rgba(0, 0, 0, 0.5) 12px 12px 0 0;
  -webkit-box-shadow: rgba(0, 0, 0, 0.5) -12px -12px 0 0, rgba(0, 0, 0, 0.5) 12px -12px 0 0, rgba(0, 0, 0, 0.5) -12px 0 0 0, rgba(0, 0, 0, 0.5) 12px 0 0 0, rgba(0, 0, 0, 0.5) -12px 12px 0 0, rgba(0, 0, 0, 0.5) 0 12px 0 0, rgba(0, 0, 0, 0.5) 12px 12px 0 0;
  box-shadow: rgba(0, 0, 0, 0.5) -12px -12px 0 0, rgba(0, 0, 0, 0.5) 12px -12px 0 0, rgba(0, 0, 0, 0.5) -12px 0 0 0, rgba(0, 0, 0, 0.5) 12px 0 0 0, rgba(0, 0, 0, 0.5) -12px 12px 0 0, rgba(0, 0, 0, 0.5) 0 12px 0 0, rgba(0, 0, 0, 0.5) 12px 12px 0 0;
  -moz-animation: atebits-loader 8s infinite ease-in-out;
  -webkit-animation: atebits-loader 8s infinite ease-in-out;
  animation: atebits-loader 8s infinite ease-in-out;
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  -webkit-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
}

@-moz-keyframes whirly-loader {
  0% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@-webkit-keyframes whirly-loader {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
@keyframes whirly-loader {
  0% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
  }
  100% {
    -moz-transform: rotate(360deg);
    -ms-transform: rotate(360deg);
    -webkit-transform: rotate(360deg);
    transform: rotate(360deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.whirly-loader:not(:required) {
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
  display: inline-block;
  width: 8px;
  height: 8px;
  background: transparent;
  -moz-border-radius: 100%;
  -webkit-border-radius: 100%;
  border-radius: 100%;
  -moz-box-shadow: #e66 0px 26px 0 6px, #e66 0.90971px 26.05079px 0 5.93333px, #e66 1.82297px 26.06967px 0 5.86667px, #e66 2.73865px 26.05647px 0 5.8px, #e66 3.65561px 26.01104px 0 5.73333px, #e66 4.57274px 25.93327px 0 5.66667px, #e66 5.48887px 25.8231px 0 5.6px, #e66 6.40287px 25.68049px 0 5.53333px, #e66 7.31358px 25.50548px 0 5.46667px, #e66 8.21985px 25.2981px 0 5.4px, #e66 9.12054px 25.05847px 0 5.33333px, #e66 10.01448px 24.78672px 0 5.26667px, #e66 10.90054px 24.48302px 0 5.2px, #e66 11.77757px 24.1476px 0 5.13333px, #e66 12.64443px 23.78072px 0 5.06667px, #e66 13.5px 23.38269px 0 5px, #e66 14.34315px 22.95384px 0 4.93333px, #e66 15.17277px 22.49455px 0 4.86667px, #e66 15.98776px 22.00526px 0 4.8px, #e66 16.78704px 21.48643px 0 4.73333px, #e66 17.56953px 20.93855px 0 4.66667px, #e66 18.33418px 20.36217px 0 4.6px, #e66 19.07995px 19.75787px 0 4.53333px, #e66 19.80582px 19.12626px 0 4.46667px, #e66 20.5108px 18.468px 0 4.4px, #e66 21.1939px 17.78379px 0 4.33333px, #e66 21.85416px 17.07434px 0 4.26667px, #e66 22.49067px 16.34043px 0 4.2px, #e66 23.10251px 15.58284px 0 4.13333px, #e66 23.68881px 14.80241px 0 4.06667px, #e66 24.24871px 14.0px 0 4px, #e66 24.7814px 13.1765px 0 3.93333px, #e66 25.28607px 12.33284px 0 3.86667px, #e66 25.76198px 11.46997px 0 3.8px, #e66 26.2084px 10.58888px 0 3.73333px, #e66 26.62462px 9.69057px 0 3.66667px, #e66 27.01001px 8.77608px 0 3.6px, #e66 27.36392px 7.84648px 0 3.53333px, #e66 27.68577px 6.90284px 0 3.46667px, #e66 27.97502px 5.94627px 0 3.4px, #e66 28.23116px 4.97791px 0 3.33333px, #e66 28.4537px 3.99891px 0 3.26667px, #e66 28.64223px 3.01042px 0 3.2px, #e66 28.79635px 2.01364px 0 3.13333px, #e66 28.91571px 1.00976px 0 3.06667px, #e66 29px 0.0px 0 3px, #e66 29.04896px -1.01441px 0 2.93333px, #e66 29.06237px -2.03224px 0 2.86667px, #e66 29.04004px -3.05223px 0 2.8px, #e66 28.98185px -4.07313px 0 2.73333px, #e66 28.88769px -5.09368px 0 2.66667px, #e66 28.75754px -6.1126px 0 2.6px, #e66 28.59138px -7.12863px 0 2.53333px, #e66 28.38926px -8.14049px 0 2.46667px, #e66 28.15127px -9.1469px 0 2.4px, #e66 27.87755px -10.1466px 0 2.33333px, #e66 27.56827px -11.1383px 0 2.26667px, #e66 27.22365px -12.12075px 0 2.2px, #e66 26.84398px -13.09268px 0 2.13333px, #e66 26.42956px -14.05285px 0 2.06667px, #e66 25.98076px -15.0px 0 2px, #e66 25.49798px -15.93291px 0 1.93333px, #e66 24.98167px -16.85035px 0 1.86667px, #e66 24.43231px -17.75111px 0 1.8px, #e66 23.85046px -18.63402px 0 1.73333px, #e66 23.23668px -19.49789px 0 1.66667px, #e66 22.5916px -20.34157px 0 1.6px, #e66 21.91589px -21.16393px 0 1.53333px, #e66 21.21024px -21.96384px 0 1.46667px, #e66 20.4754px -22.74023px 0 1.4px, #e66 19.71215px -23.49203px 0 1.33333px, #e66 18.92133px -24.2182px 0 1.26667px, #e66 18.10379px -24.91772px 0 1.2px, #e66 17.26042px -25.58963px 0 1.13333px, #e66 16.39217px -26.23295px 0 1.06667px, #e66 15.5px -26.84679px 0 1px, #e66 14.58492px -27.43024px 0 0.93333px, #e66 13.64796px -27.98245px 0 0.86667px, #e66 12.69018px -28.50262px 0 0.8px, #e66 11.7127px -28.98995px 0 0.73333px, #e66 10.71663px -29.4437px 0 0.66667px, #e66 9.70313px -29.86317px 0 0.6px, #e66 8.67339px -30.2477px 0 0.53333px, #e66 7.6286px -30.59666px 0 0.46667px, #e66 6.57001px -30.90946px 0 0.4px, #e66 5.49886px -31.18558px 0 0.33333px, #e66 4.41643px -31.42451px 0 0.26667px, #e66 3.32401px -31.6258px 0 0.2px, #e66 2.22291px -31.78904px 0 0.13333px, #e66 1.11446px -31.91388px 0 0.06667px, #e66 0.0px -32px 0 0px, #e66 -1.11911px -32.04713px 0 -0.06667px, #e66 -2.24151px -32.05506px 0 -0.13333px, #e66 -3.36582px -32.02361px 0 -0.2px, #e66 -4.49065px -31.95265px 0 -0.26667px, #e66 -5.61462px -31.84212px 0 -0.33333px, #e66 -6.73634px -31.69198px 0 -0.4px, #e66 -7.8544px -31.50227px 0 -0.46667px, #e66 -8.9674px -31.27305px 0 -0.53333px, #e66 -10.07395px -31.00444px 0 -0.6px, #e66 -11.17266px -30.69663px 0 -0.66667px, #e66 -12.26212px -30.34982px 0 -0.73333px, #e66 -13.34096px -29.96429px 0 -0.8px, #e66 -14.4078px -29.54036px 0 -0.86667px, #e66 -15.46126px -29.07841px 0 -0.93333px, #e66 -16.5px -28.57884px 0 -1px, #e66 -17.52266px -28.04212px 0 -1.06667px, #e66 -18.52792px -27.46878px 0 -1.13333px, #e66 -19.51447px -26.85936px 0 -1.2px, #e66 -20.48101px -26.21449px 0 -1.26667px, #e66 -21.42625px -25.53481px 0 -1.33333px, #e66 -22.34896px -24.82104px 0 -1.4px, #e66 -23.2479px -24.07391px 0 -1.46667px, #e66 -24.12186px -23.29421px 0 -1.53333px, #e66 -24.96967px -22.48279px 0 -1.6px, #e66 -25.79016px -21.64052px 0 -1.66667px, #e66 -26.58223px -20.76831px 0 -1.73333px, #e66 -27.34477px -19.86714px 0 -1.8px, #e66 -28.07674px -18.938px 0 -1.86667px, #e66 -28.7771px -17.98193px 0 -1.93333px, #e66 -29.44486px -17.0px 0 -2px, #e66 -30.07908px -15.99333px 0 -2.06667px, #e66 -30.67884px -14.96307px 0 -2.13333px, #e66 -31.24325px -13.91039px 0 -2.2px, #e66 -31.7715px -12.83652px 0 -2.26667px, #e66 -32.26278px -11.74269px 0 -2.33333px, #e66 -32.71634px -10.63018px 0 -2.4px, #e66 -33.13149px -9.5003px 0 -2.46667px, #e66 -33.50755px -8.35437px 0 -2.53333px, #e66 -33.84391px -7.19374px 0 -2.6px, #e66 -34.14px -6.0198px 0 -2.66667px, #e66 -34.39531px -4.83395px 0 -2.73333px, #e66 -34.60936px -3.63759px 0 -2.8px, #e66 -34.78173px -2.43218px 0 -2.86667px, #e66 -34.91205px -1.21916px 0 -2.93333px, #e66 -35px 0.0px 0 -3px, #e66 -35.04531px 1.22381px 0 -3.06667px, #e66 -35.04775px 2.45078px 0 -3.13333px, #e66 -35.00717px 3.6794px 0 -3.2px, #e66 -34.92345px 4.90817px 0 -3.26667px, #e66 -34.79654px 6.13557px 0 -3.33333px, #e66 -34.62643px 7.36007px 0 -3.4px, #e66 -34.41316px 8.58016px 0 -3.46667px, #e66 -34.15683px 9.79431px 0 -3.53333px, #e66 -33.85761px 11.001px 0 -3.6px, #e66 -33.5157px 12.19872px 0 -3.66667px, #e66 -33.13137px 13.38594px 0 -3.73333px, #e66 -32.70493px 14.56117px 0 -3.8px, #e66 -32.23675px 15.72291px 0 -3.86667px, #e66 -31.72725px 16.86968px 0 -3.93333px, #e66 -31.17691px 18px 0 -4px, #e66 -30.58627px 19.11242px 0 -4.06667px, #e66 -29.95589px 20.2055px 0 -4.13333px, #e66 -29.28642px 21.27783px 0 -4.2px, #e66 -28.57852px 22.32799px 0 -4.26667px, #e66 -27.83295px 23.35462px 0 -4.33333px, #e66 -27.05047px 24.35635px 0 -4.4px, #e66 -26.23192px 25.33188px 0 -4.46667px, #e66 -25.37819px 26.27988px 0 -4.53333px, #e66 -24.49018px 27.1991px 0 -4.6px, #e66 -23.56888px 28.0883px 0 -4.66667px, #e66 -22.6153px 28.94626px 0 -4.73333px, #e66 -21.6305px 29.77183px 0 -4.8px, #e66 -20.61558px 30.56385px 0 -4.86667px, #e66 -19.57168px 31.32124px 0 -4.93333px, #e66 -18.5px 32.04294px 0 -5px, #e66 -17.40175px 32.72792px 0 -5.06667px, #e66 -16.27818px 33.37522px 0 -5.13333px, #e66 -15.1306px 33.98389px 0 -5.2px, #e66 -13.96034px 34.55305px 0 -5.26667px, #e66 -12.76875px 35.08186px 0 -5.33333px, #e66 -11.55724px 35.56951px 0 -5.4px, #e66 -10.32721px 36.01527px 0 -5.46667px, #e66 -9.08014px 36.41843px 0 -5.53333px, #e66 -7.81748px 36.77835px 0 -5.6px, #e66 -6.54075px 37.09443px 0 -5.66667px, #e66 -5.25147px 37.36612px 0 -5.73333px, #e66 -3.95118px 37.59293px 0 -5.8px, #e66 -2.64145px 37.77443px 0 -5.86667px, #e66 -1.32385px 37.91023px 0 -5.93333px;
  -webkit-box-shadow: #e66 0px 26px 0 6px, #e66 0.90971px 26.05079px 0 5.93333px, #e66 1.82297px 26.06967px 0 5.86667px, #e66 2.73865px 26.05647px 0 5.8px, #e66 3.65561px 26.01104px 0 5.73333px, #e66 4.57274px 25.93327px 0 5.66667px, #e66 5.48887px 25.8231px 0 5.6px, #e66 6.40287px 25.68049px 0 5.53333px, #e66 7.31358px 25.50548px 0 5.46667px, #e66 8.21985px 25.2981px 0 5.4px, #e66 9.12054px 25.05847px 0 5.33333px, #e66 10.01448px 24.78672px 0 5.26667px, #e66 10.90054px 24.48302px 0 5.2px, #e66 11.77757px 24.1476px 0 5.13333px, #e66 12.64443px 23.78072px 0 5.06667px, #e66 13.5px 23.38269px 0 5px, #e66 14.34315px 22.95384px 0 4.93333px, #e66 15.17277px 22.49455px 0 4.86667px, #e66 15.98776px 22.00526px 0 4.8px, #e66 16.78704px 21.48643px 0 4.73333px, #e66 17.56953px 20.93855px 0 4.66667px, #e66 18.33418px 20.36217px 0 4.6px, #e66 19.07995px 19.75787px 0 4.53333px, #e66 19.80582px 19.12626px 0 4.46667px, #e66 20.5108px 18.468px 0 4.4px, #e66 21.1939px 17.78379px 0 4.33333px, #e66 21.85416px 17.07434px 0 4.26667px, #e66 22.49067px 16.34043px 0 4.2px, #e66 23.10251px 15.58284px 0 4.13333px, #e66 23.68881px 14.80241px 0 4.06667px, #e66 24.24871px 14.0px 0 4px, #e66 24.7814px 13.1765px 0 3.93333px, #e66 25.28607px 12.33284px 0 3.86667px, #e66 25.76198px 11.46997px 0 3.8px, #e66 26.2084px 10.58888px 0 3.73333px, #e66 26.62462px 9.69057px 0 3.66667px, #e66 27.01001px 8.77608px 0 3.6px, #e66 27.36392px 7.84648px 0 3.53333px, #e66 27.68577px 6.90284px 0 3.46667px, #e66 27.97502px 5.94627px 0 3.4px, #e66 28.23116px 4.97791px 0 3.33333px, #e66 28.4537px 3.99891px 0 3.26667px, #e66 28.64223px 3.01042px 0 3.2px, #e66 28.79635px 2.01364px 0 3.13333px, #e66 28.91571px 1.00976px 0 3.06667px, #e66 29px 0.0px 0 3px, #e66 29.04896px -1.01441px 0 2.93333px, #e66 29.06237px -2.03224px 0 2.86667px, #e66 29.04004px -3.05223px 0 2.8px, #e66 28.98185px -4.07313px 0 2.73333px, #e66 28.88769px -5.09368px 0 2.66667px, #e66 28.75754px -6.1126px 0 2.6px, #e66 28.59138px -7.12863px 0 2.53333px, #e66 28.38926px -8.14049px 0 2.46667px, #e66 28.15127px -9.1469px 0 2.4px, #e66 27.87755px -10.1466px 0 2.33333px, #e66 27.56827px -11.1383px 0 2.26667px, #e66 27.22365px -12.12075px 0 2.2px, #e66 26.84398px -13.09268px 0 2.13333px, #e66 26.42956px -14.05285px 0 2.06667px, #e66 25.98076px -15.0px 0 2px, #e66 25.49798px -15.93291px 0 1.93333px, #e66 24.98167px -16.85035px 0 1.86667px, #e66 24.43231px -17.75111px 0 1.8px, #e66 23.85046px -18.63402px 0 1.73333px, #e66 23.23668px -19.49789px 0 1.66667px, #e66 22.5916px -20.34157px 0 1.6px, #e66 21.91589px -21.16393px 0 1.53333px, #e66 21.21024px -21.96384px 0 1.46667px, #e66 20.4754px -22.74023px 0 1.4px, #e66 19.71215px -23.49203px 0 1.33333px, #e66 18.92133px -24.2182px 0 1.26667px, #e66 18.10379px -24.91772px 0 1.2px, #e66 17.26042px -25.58963px 0 1.13333px, #e66 16.39217px -26.23295px 0 1.06667px, #e66 15.5px -26.84679px 0 1px, #e66 14.58492px -27.43024px 0 0.93333px, #e66 13.64796px -27.98245px 0 0.86667px, #e66 12.69018px -28.50262px 0 0.8px, #e66 11.7127px -28.98995px 0 0.73333px, #e66 10.71663px -29.4437px 0 0.66667px, #e66 9.70313px -29.86317px 0 0.6px, #e66 8.67339px -30.2477px 0 0.53333px, #e66 7.6286px -30.59666px 0 0.46667px, #e66 6.57001px -30.90946px 0 0.4px, #e66 5.49886px -31.18558px 0 0.33333px, #e66 4.41643px -31.42451px 0 0.26667px, #e66 3.32401px -31.6258px 0 0.2px, #e66 2.22291px -31.78904px 0 0.13333px, #e66 1.11446px -31.91388px 0 0.06667px, #e66 0.0px -32px 0 0px, #e66 -1.11911px -32.04713px 0 -0.06667px, #e66 -2.24151px -32.05506px 0 -0.13333px, #e66 -3.36582px -32.02361px 0 -0.2px, #e66 -4.49065px -31.95265px 0 -0.26667px, #e66 -5.61462px -31.84212px 0 -0.33333px, #e66 -6.73634px -31.69198px 0 -0.4px, #e66 -7.8544px -31.50227px 0 -0.46667px, #e66 -8.9674px -31.27305px 0 -0.53333px, #e66 -10.07395px -31.00444px 0 -0.6px, #e66 -11.17266px -30.69663px 0 -0.66667px, #e66 -12.26212px -30.34982px 0 -0.73333px, #e66 -13.34096px -29.96429px 0 -0.8px, #e66 -14.4078px -29.54036px 0 -0.86667px, #e66 -15.46126px -29.07841px 0 -0.93333px, #e66 -16.5px -28.57884px 0 -1px, #e66 -17.52266px -28.04212px 0 -1.06667px, #e66 -18.52792px -27.46878px 0 -1.13333px, #e66 -19.51447px -26.85936px 0 -1.2px, #e66 -20.48101px -26.21449px 0 -1.26667px, #e66 -21.42625px -25.53481px 0 -1.33333px, #e66 -22.34896px -24.82104px 0 -1.4px, #e66 -23.2479px -24.07391px 0 -1.46667px, #e66 -24.12186px -23.29421px 0 -1.53333px, #e66 -24.96967px -22.48279px 0 -1.6px, #e66 -25.79016px -21.64052px 0 -1.66667px, #e66 -26.58223px -20.76831px 0 -1.73333px, #e66 -27.34477px -19.86714px 0 -1.8px, #e66 -28.07674px -18.938px 0 -1.86667px, #e66 -28.7771px -17.98193px 0 -1.93333px, #e66 -29.44486px -17.0px 0 -2px, #e66 -30.07908px -15.99333px 0 -2.06667px, #e66 -30.67884px -14.96307px 0 -2.13333px, #e66 -31.24325px -13.91039px 0 -2.2px, #e66 -31.7715px -12.83652px 0 -2.26667px, #e66 -32.26278px -11.74269px 0 -2.33333px, #e66 -32.71634px -10.63018px 0 -2.4px, #e66 -33.13149px -9.5003px 0 -2.46667px, #e66 -33.50755px -8.35437px 0 -2.53333px, #e66 -33.84391px -7.19374px 0 -2.6px, #e66 -34.14px -6.0198px 0 -2.66667px, #e66 -34.39531px -4.83395px 0 -2.73333px, #e66 -34.60936px -3.63759px 0 -2.8px, #e66 -34.78173px -2.43218px 0 -2.86667px, #e66 -34.91205px -1.21916px 0 -2.93333px, #e66 -35px 0.0px 0 -3px, #e66 -35.04531px 1.22381px 0 -3.06667px, #e66 -35.04775px 2.45078px 0 -3.13333px, #e66 -35.00717px 3.6794px 0 -3.2px, #e66 -34.92345px 4.90817px 0 -3.26667px, #e66 -34.79654px 6.13557px 0 -3.33333px, #e66 -34.62643px 7.36007px 0 -3.4px, #e66 -34.41316px 8.58016px 0 -3.46667px, #e66 -34.15683px 9.79431px 0 -3.53333px, #e66 -33.85761px 11.001px 0 -3.6px, #e66 -33.5157px 12.19872px 0 -3.66667px, #e66 -33.13137px 13.38594px 0 -3.73333px, #e66 -32.70493px 14.56117px 0 -3.8px, #e66 -32.23675px 15.72291px 0 -3.86667px, #e66 -31.72725px 16.86968px 0 -3.93333px, #e66 -31.17691px 18px 0 -4px, #e66 -30.58627px 19.11242px 0 -4.06667px, #e66 -29.95589px 20.2055px 0 -4.13333px, #e66 -29.28642px 21.27783px 0 -4.2px, #e66 -28.57852px 22.32799px 0 -4.26667px, #e66 -27.83295px 23.35462px 0 -4.33333px, #e66 -27.05047px 24.35635px 0 -4.4px, #e66 -26.23192px 25.33188px 0 -4.46667px, #e66 -25.37819px 26.27988px 0 -4.53333px, #e66 -24.49018px 27.1991px 0 -4.6px, #e66 -23.56888px 28.0883px 0 -4.66667px, #e66 -22.6153px 28.94626px 0 -4.73333px, #e66 -21.6305px 29.77183px 0 -4.8px, #e66 -20.61558px 30.56385px 0 -4.86667px, #e66 -19.57168px 31.32124px 0 -4.93333px, #e66 -18.5px 32.04294px 0 -5px, #e66 -17.40175px 32.72792px 0 -5.06667px, #e66 -16.27818px 33.37522px 0 -5.13333px, #e66 -15.1306px 33.98389px 0 -5.2px, #e66 -13.96034px 34.55305px 0 -5.26667px, #e66 -12.76875px 35.08186px 0 -5.33333px, #e66 -11.55724px 35.56951px 0 -5.4px, #e66 -10.32721px 36.01527px 0 -5.46667px, #e66 -9.08014px 36.41843px 0 -5.53333px, #e66 -7.81748px 36.77835px 0 -5.6px, #e66 -6.54075px 37.09443px 0 -5.66667px, #e66 -5.25147px 37.36612px 0 -5.73333px, #e66 -3.95118px 37.59293px 0 -5.8px, #e66 -2.64145px 37.77443px 0 -5.86667px, #e66 -1.32385px 37.91023px 0 -5.93333px;
  box-shadow: #e66 0px 26px 0 6px, #e66 0.90971px 26.05079px 0 5.93333px, #e66 1.82297px 26.06967px 0 5.86667px, #e66 2.73865px 26.05647px 0 5.8px, #e66 3.65561px 26.01104px 0 5.73333px, #e66 4.57274px 25.93327px 0 5.66667px, #e66 5.48887px 25.8231px 0 5.6px, #e66 6.40287px 25.68049px 0 5.53333px, #e66 7.31358px 25.50548px 0 5.46667px, #e66 8.21985px 25.2981px 0 5.4px, #e66 9.12054px 25.05847px 0 5.33333px, #e66 10.01448px 24.78672px 0 5.26667px, #e66 10.90054px 24.48302px 0 5.2px, #e66 11.77757px 24.1476px 0 5.13333px, #e66 12.64443px 23.78072px 0 5.06667px, #e66 13.5px 23.38269px 0 5px, #e66 14.34315px 22.95384px 0 4.93333px, #e66 15.17277px 22.49455px 0 4.86667px, #e66 15.98776px 22.00526px 0 4.8px, #e66 16.78704px 21.48643px 0 4.73333px, #e66 17.56953px 20.93855px 0 4.66667px, #e66 18.33418px 20.36217px 0 4.6px, #e66 19.07995px 19.75787px 0 4.53333px, #e66 19.80582px 19.12626px 0 4.46667px, #e66 20.5108px 18.468px 0 4.4px, #e66 21.1939px 17.78379px 0 4.33333px, #e66 21.85416px 17.07434px 0 4.26667px, #e66 22.49067px 16.34043px 0 4.2px, #e66 23.10251px 15.58284px 0 4.13333px, #e66 23.68881px 14.80241px 0 4.06667px, #e66 24.24871px 14.0px 0 4px, #e66 24.7814px 13.1765px 0 3.93333px, #e66 25.28607px 12.33284px 0 3.86667px, #e66 25.76198px 11.46997px 0 3.8px, #e66 26.2084px 10.58888px 0 3.73333px, #e66 26.62462px 9.69057px 0 3.66667px, #e66 27.01001px 8.77608px 0 3.6px, #e66 27.36392px 7.84648px 0 3.53333px, #e66 27.68577px 6.90284px 0 3.46667px, #e66 27.97502px 5.94627px 0 3.4px, #e66 28.23116px 4.97791px 0 3.33333px, #e66 28.4537px 3.99891px 0 3.26667px, #e66 28.64223px 3.01042px 0 3.2px, #e66 28.79635px 2.01364px 0 3.13333px, #e66 28.91571px 1.00976px 0 3.06667px, #e66 29px 0.0px 0 3px, #e66 29.04896px -1.01441px 0 2.93333px, #e66 29.06237px -2.03224px 0 2.86667px, #e66 29.04004px -3.05223px 0 2.8px, #e66 28.98185px -4.07313px 0 2.73333px, #e66 28.88769px -5.09368px 0 2.66667px, #e66 28.75754px -6.1126px 0 2.6px, #e66 28.59138px -7.12863px 0 2.53333px, #e66 28.38926px -8.14049px 0 2.46667px, #e66 28.15127px -9.1469px 0 2.4px, #e66 27.87755px -10.1466px 0 2.33333px, #e66 27.56827px -11.1383px 0 2.26667px, #e66 27.22365px -12.12075px 0 2.2px, #e66 26.84398px -13.09268px 0 2.13333px, #e66 26.42956px -14.05285px 0 2.06667px, #e66 25.98076px -15.0px 0 2px, #e66 25.49798px -15.93291px 0 1.93333px, #e66 24.98167px -16.85035px 0 1.86667px, #e66 24.43231px -17.75111px 0 1.8px, #e66 23.85046px -18.63402px 0 1.73333px, #e66 23.23668px -19.49789px 0 1.66667px, #e66 22.5916px -20.34157px 0 1.6px, #e66 21.91589px -21.16393px 0 1.53333px, #e66 21.21024px -21.96384px 0 1.46667px, #e66 20.4754px -22.74023px 0 1.4px, #e66 19.71215px -23.49203px 0 1.33333px, #e66 18.92133px -24.2182px 0 1.26667px, #e66 18.10379px -24.91772px 0 1.2px, #e66 17.26042px -25.58963px 0 1.13333px, #e66 16.39217px -26.23295px 0 1.06667px, #e66 15.5px -26.84679px 0 1px, #e66 14.58492px -27.43024px 0 0.93333px, #e66 13.64796px -27.98245px 0 0.86667px, #e66 12.69018px -28.50262px 0 0.8px, #e66 11.7127px -28.98995px 0 0.73333px, #e66 10.71663px -29.4437px 0 0.66667px, #e66 9.70313px -29.86317px 0 0.6px, #e66 8.67339px -30.2477px 0 0.53333px, #e66 7.6286px -30.59666px 0 0.46667px, #e66 6.57001px -30.90946px 0 0.4px, #e66 5.49886px -31.18558px 0 0.33333px, #e66 4.41643px -31.42451px 0 0.26667px, #e66 3.32401px -31.6258px 0 0.2px, #e66 2.22291px -31.78904px 0 0.13333px, #e66 1.11446px -31.91388px 0 0.06667px, #e66 0.0px -32px 0 0px, #e66 -1.11911px -32.04713px 0 -0.06667px, #e66 -2.24151px -32.05506px 0 -0.13333px, #e66 -3.36582px -32.02361px 0 -0.2px, #e66 -4.49065px -31.95265px 0 -0.26667px, #e66 -5.61462px -31.84212px 0 -0.33333px, #e66 -6.73634px -31.69198px 0 -0.4px, #e66 -7.8544px -31.50227px 0 -0.46667px, #e66 -8.9674px -31.27305px 0 -0.53333px, #e66 -10.07395px -31.00444px 0 -0.6px, #e66 -11.17266px -30.69663px 0 -0.66667px, #e66 -12.26212px -30.34982px 0 -0.73333px, #e66 -13.34096px -29.96429px 0 -0.8px, #e66 -14.4078px -29.54036px 0 -0.86667px, #e66 -15.46126px -29.07841px 0 -0.93333px, #e66 -16.5px -28.57884px 0 -1px, #e66 -17.52266px -28.04212px 0 -1.06667px, #e66 -18.52792px -27.46878px 0 -1.13333px, #e66 -19.51447px -26.85936px 0 -1.2px, #e66 -20.48101px -26.21449px 0 -1.26667px, #e66 -21.42625px -25.53481px 0 -1.33333px, #e66 -22.34896px -24.82104px 0 -1.4px, #e66 -23.2479px -24.07391px 0 -1.46667px, #e66 -24.12186px -23.29421px 0 -1.53333px, #e66 -24.96967px -22.48279px 0 -1.6px, #e66 -25.79016px -21.64052px 0 -1.66667px, #e66 -26.58223px -20.76831px 0 -1.73333px, #e66 -27.34477px -19.86714px 0 -1.8px, #e66 -28.07674px -18.938px 0 -1.86667px, #e66 -28.7771px -17.98193px 0 -1.93333px, #e66 -29.44486px -17.0px 0 -2px, #e66 -30.07908px -15.99333px 0 -2.06667px, #e66 -30.67884px -14.96307px 0 -2.13333px, #e66 -31.24325px -13.91039px 0 -2.2px, #e66 -31.7715px -12.83652px 0 -2.26667px, #e66 -32.26278px -11.74269px 0 -2.33333px, #e66 -32.71634px -10.63018px 0 -2.4px, #e66 -33.13149px -9.5003px 0 -2.46667px, #e66 -33.50755px -8.35437px 0 -2.53333px, #e66 -33.84391px -7.19374px 0 -2.6px, #e66 -34.14px -6.0198px 0 -2.66667px, #e66 -34.39531px -4.83395px 0 -2.73333px, #e66 -34.60936px -3.63759px 0 -2.8px, #e66 -34.78173px -2.43218px 0 -2.86667px, #e66 -34.91205px -1.21916px 0 -2.93333px, #e66 -35px 0.0px 0 -3px, #e66 -35.04531px 1.22381px 0 -3.06667px, #e66 -35.04775px 2.45078px 0 -3.13333px, #e66 -35.00717px 3.6794px 0 -3.2px, #e66 -34.92345px 4.90817px 0 -3.26667px, #e66 -34.79654px 6.13557px 0 -3.33333px, #e66 -34.62643px 7.36007px 0 -3.4px, #e66 -34.41316px 8.58016px 0 -3.46667px, #e66 -34.15683px 9.79431px 0 -3.53333px, #e66 -33.85761px 11.001px 0 -3.6px, #e66 -33.5157px 12.19872px 0 -3.66667px, #e66 -33.13137px 13.38594px 0 -3.73333px, #e66 -32.70493px 14.56117px 0 -3.8px, #e66 -32.23675px 15.72291px 0 -3.86667px, #e66 -31.72725px 16.86968px 0 -3.93333px, #e66 -31.17691px 18px 0 -4px, #e66 -30.58627px 19.11242px 0 -4.06667px, #e66 -29.95589px 20.2055px 0 -4.13333px, #e66 -29.28642px 21.27783px 0 -4.2px, #e66 -28.57852px 22.32799px 0 -4.26667px, #e66 -27.83295px 23.35462px 0 -4.33333px, #e66 -27.05047px 24.35635px 0 -4.4px, #e66 -26.23192px 25.33188px 0 -4.46667px, #e66 -25.37819px 26.27988px 0 -4.53333px, #e66 -24.49018px 27.1991px 0 -4.6px, #e66 -23.56888px 28.0883px 0 -4.66667px, #e66 -22.6153px 28.94626px 0 -4.73333px, #e66 -21.6305px 29.77183px 0 -4.8px, #e66 -20.61558px 30.56385px 0 -4.86667px, #e66 -19.57168px 31.32124px 0 -4.93333px, #e66 -18.5px 32.04294px 0 -5px, #e66 -17.40175px 32.72792px 0 -5.06667px, #e66 -16.27818px 33.37522px 0 -5.13333px, #e66 -15.1306px 33.98389px 0 -5.2px, #e66 -13.96034px 34.55305px 0 -5.26667px, #e66 -12.76875px 35.08186px 0 -5.33333px, #e66 -11.55724px 35.56951px 0 -5.4px, #e66 -10.32721px 36.01527px 0 -5.46667px, #e66 -9.08014px 36.41843px 0 -5.53333px, #e66 -7.81748px 36.77835px 0 -5.6px, #e66 -6.54075px 37.09443px 0 -5.66667px, #e66 -5.25147px 37.36612px 0 -5.73333px, #e66 -3.95118px 37.59293px 0 -5.8px, #e66 -2.64145px 37.77443px 0 -5.86667px, #e66 -1.32385px 37.91023px 0 -5.93333px;
  -moz-animation: whirly-loader 1.25s infinite linear;
  -webkit-animation: whirly-loader 1.25s infinite linear;
  animation: whirly-loader 1.25s infinite linear;
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  -webkit-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
}

@-moz-keyframes flower-loader {
  0% {
    -moz-transform: rotate(0deg);
    transform: rotate(0deg);
    -moz-box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
    box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
  }
  50% {
    -moz-transform: rotate(1080deg);
    transform: rotate(1080deg);
    -moz-box-shadow: white 0 0 15px 0, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px;
    box-shadow: white 0 0 15px 0, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px;
  }
}
@-webkit-keyframes flower-loader {
  0% {
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
    -webkit-box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
    box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
  }
  50% {
    -webkit-transform: rotate(1080deg);
    transform: rotate(1080deg);
    -webkit-box-shadow: white 0 0 15px 0, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px;
    box-shadow: white 0 0 15px 0, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px;
  }
}
@keyframes flower-loader {
  0% {
    -moz-transform: rotate(0deg);
    -ms-transform: rotate(0deg);
    -webkit-transform: rotate(0deg);
    transform: rotate(0deg);
    -moz-box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
    -webkit-box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
    box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
  }
  50% {
    -moz-transform: rotate(1080deg);
    -ms-transform: rotate(1080deg);
    -webkit-transform: rotate(1080deg);
    transform: rotate(1080deg);
    -moz-box-shadow: white 0 0 15px 0, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px;
    -webkit-box-shadow: white 0 0 15px 0, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px;
    box-shadow: white 0 0 15px 0, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px;
  }
}
/* :not(:required) hides this rule from IE9 and below */
.flower-loader:not(:required) {
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
  display: inline-block;
  width: 16px;
  height: 16px;
  background: #e96;
  border-radius: 100%;
  -moz-box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
  -webkit-box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
  box-shadow: white 0 0 15px 0, #fd8 -12px -12px 0 4px, #fd8 12px -12px 0 4px, #fd8 12px 12px 0 4px, #fd8 -12px 12px 0 4px;
  -moz-animation: flower-loader 5s infinite ease-in-out;
  -webkit-animation: flower-loader 5s infinite ease-in-out;
  animation: flower-loader 5s infinite ease-in-out;
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  -webkit-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
}

@-moz-keyframes dots-loader {
  0% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  8.33% {
    -moz-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  16.67% {
    -moz-box-shadow: #f86 14px 14px 0 7px, #fc6 14px 14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 14px 14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  25% {
    -moz-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  33.33% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae -14px -14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae -14px -14px 0 7px;
  }
  41.67% {
    -moz-box-shadow: #f86 14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  50% {
    -moz-box-shadow: #f86 14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  58.33% {
    -moz-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  66.67% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px -14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px -14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  75% {
    -moz-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  83.33% {
    -moz-box-shadow: #f86 14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae 14px 14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae 14px 14px 0 7px;
  }
  91.67% {
    -moz-box-shadow: #f86 -14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  100% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
}
@-webkit-keyframes dots-loader {
  0% {
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  8.33% {
    -webkit-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  16.67% {
    -webkit-box-shadow: #f86 14px 14px 0 7px, #fc6 14px 14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 14px 14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  25% {
    -webkit-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  33.33% {
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae -14px -14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae -14px -14px 0 7px;
  }
  41.67% {
    -webkit-box-shadow: #f86 14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  50% {
    -webkit-box-shadow: #f86 14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  58.33% {
    -webkit-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  66.67% {
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px -14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px -14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  75% {
    -webkit-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  83.33% {
    -webkit-box-shadow: #f86 14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae 14px 14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae 14px 14px 0 7px;
  }
  91.67% {
    -webkit-box-shadow: #f86 -14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  100% {
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
}
@keyframes dots-loader {
  0% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  8.33% {
    -moz-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    -webkit-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  16.67% {
    -moz-box-shadow: #f86 14px 14px 0 7px, #fc6 14px 14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    -webkit-box-shadow: #f86 14px 14px 0 7px, #fc6 14px 14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 14px 14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  25% {
    -moz-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px 14px 0 7px, #4ae -14px 14px 0 7px;
    -webkit-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  33.33% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae -14px -14px 0 7px;
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae -14px -14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae -14px -14px 0 7px;
  }
  41.67% {
    -moz-box-shadow: #f86 14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    -webkit-box-shadow: #f86 14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  50% {
    -moz-box-shadow: #f86 14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    -webkit-box-shadow: #f86 14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  58.33% {
    -moz-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    -webkit-box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 -14px 14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  66.67% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px -14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px -14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 -14px -14px 0 7px, #6d7 -14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  75% {
    -moz-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px -14px 0 7px, #4ae 14px -14px 0 7px;
    -webkit-box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px -14px 0 7px, #4ae 14px -14px 0 7px;
    box-shadow: #f86 14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px -14px 0 7px, #4ae 14px -14px 0 7px;
  }
  83.33% {
    -moz-box-shadow: #f86 14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae 14px 14px 0 7px;
    -webkit-box-shadow: #f86 14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae 14px 14px 0 7px;
    box-shadow: #f86 14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae 14px 14px 0 7px;
  }
  91.67% {
    -moz-box-shadow: #f86 -14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    -webkit-box-shadow: #f86 -14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px 14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
  100% {
    -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
    box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  }
}
/* :not(:required) hides this rule from IE9 and below */
.dots-loader:not(:required) {
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
  display: inline-block;
  width: 7px;
  height: 7px;
  background: transparent;
  border-radius: 100%;
  -moz-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  -webkit-box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  box-shadow: #f86 -14px -14px 0 7px, #fc6 14px -14px 0 7px, #6d7 14px 14px 0 7px, #4ae -14px 14px 0 7px;
  -moz-animation: dots-loader 5s infinite ease-in-out;
  -webkit-animation: dots-loader 5s infinite ease-in-out;
  animation: dots-loader 5s infinite ease-in-out;
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  -webkit-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
}

@-moz-keyframes circles-loader {
  0% {
    -moz-transform: rotate(-720deg);
    transform: rotate(-720deg);
  }
  50% {
    -moz-transform: rotate(720deg);
    transform: rotate(720deg);
  }
}
@-webkit-keyframes circles-loader {
  0% {
    -webkit-transform: rotate(-720deg);
    transform: rotate(-720deg);
  }
  50% {
    -webkit-transform: rotate(720deg);
    transform: rotate(720deg);
  }
}
@keyframes circles-loader {
  0% {
    -moz-transform: rotate(-720deg);
    -ms-transform: rotate(-720deg);
    -webkit-transform: rotate(-720deg);
    transform: rotate(-720deg);
  }
  50% {
    -moz-transform: rotate(720deg);
    -ms-transform: rotate(720deg);
    -webkit-transform: rotate(720deg);
    transform: rotate(720deg);
  }
}
/* :not(:required) hides this rule from IE9 and below */
.circles-loader:not(:required) {
  position: relative;
  text-indent: -9999px;
  display: inline-block;
  width: 25px;
  height: 25px;
  background: rgba(255, 204, 51, 0.9);
  border-radius: 100%;
  -moz-animation: circles-loader 3s infinite ease-in-out;
  -webkit-animation: circles-loader 3s infinite ease-in-out;
  animation: circles-loader 3s infinite ease-in-out;
  -moz-transform-origin: 50% 100%;
  -ms-transform-origin: 50% 100%;
  -webkit-transform-origin: 50% 100%;
  transform-origin: 50% 100%;
}
.circles-loader:not(:required)::before {
  background: rgba(255, 102, 0, 0.6);
  border-radius: 100%;
  content: '';
  position: absolute;
  width: 25px;
  height: 25px;
  top: 18.75px;
  left: -10.82532px;
}
.circles-loader:not(:required)::after {
  background: rgba(255, 51, 0, 0.4);
  border-radius: 100%;
  content: '';
  position: absolute;
  width: 25px;
  height: 25px;
  top: 18.75px;
  left: 10.82532px;
}

@-moz-keyframes plus-loader-top {
  2.5% {
    background: #f86;
    -moz-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  13.75% {
    background: #ff430d;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  13.76% {
    background: #ffae0d;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  25% {
    background: #fc6;
    -moz-transform: rotateY(180deg);
    transform: rotateY(180deg);
  }
  27.5% {
    background: #fc6;
    -moz-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  41.25% {
    background: #ffae0d;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  41.26% {
    background: #2cc642;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  50% {
    background: #6d7;
    -moz-transform: rotateY(0deg);
    transform: rotateY(0deg);
  }
  52.5% {
    background: #6d7;
    -moz-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  63.75% {
    background: #2cc642;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  63.76% {
    background: #1386d2;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  75% {
    background: #4ae;
    -moz-transform: rotateY(180deg);
    transform: rotateY(180deg);
  }
  77.5% {
    background: #4ae;
    -moz-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  91.25% {
    background: #1386d2;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  91.26% {
    background: #ff430d;
    -moz-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  100% {
    background: #f86;
    -moz-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@-webkit-keyframes plus-loader-top {
  2.5% {
    background: #f86;
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  13.75% {
    background: #ff430d;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  13.76% {
    background: #ffae0d;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  25% {
    background: #fc6;
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
  }
  27.5% {
    background: #fc6;
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  41.25% {
    background: #ffae0d;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  41.26% {
    background: #2cc642;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  50% {
    background: #6d7;
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
  }
  52.5% {
    background: #6d7;
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  63.75% {
    background: #2cc642;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  63.76% {
    background: #1386d2;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  75% {
    background: #4ae;
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
  }
  77.5% {
    background: #4ae;
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  91.25% {
    background: #1386d2;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  91.26% {
    background: #ff430d;
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  100% {
    background: #f86;
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@keyframes plus-loader-top {
  2.5% {
    background: #f86;
    -moz-transform: rotateY(0deg);
    -ms-transform: rotateY(0deg);
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  13.75% {
    background: #ff430d;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  13.76% {
    background: #ffae0d;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-out;
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  25% {
    background: #fc6;
    -moz-transform: rotateY(180deg);
    -ms-transform: rotateY(180deg);
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
  }
  27.5% {
    background: #fc6;
    -moz-transform: rotateY(180deg);
    -ms-transform: rotateY(180deg);
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  41.25% {
    background: #ffae0d;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  41.26% {
    background: #2cc642;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-out;
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  50% {
    background: #6d7;
    -moz-transform: rotateY(0deg);
    -ms-transform: rotateY(0deg);
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
  }
  52.5% {
    background: #6d7;
    -moz-transform: rotateY(0deg);
    -ms-transform: rotateY(0deg);
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  63.75% {
    background: #2cc642;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  63.76% {
    background: #1386d2;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-out;
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  75% {
    background: #4ae;
    -moz-transform: rotateY(180deg);
    -ms-transform: rotateY(180deg);
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
  }
  77.5% {
    background: #4ae;
    -moz-transform: rotateY(180deg);
    -ms-transform: rotateY(180deg);
    -webkit-transform: rotateY(180deg);
    transform: rotateY(180deg);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  91.25% {
    background: #1386d2;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  91.26% {
    background: #ff430d;
    -moz-transform: rotateY(90deg);
    -ms-transform: rotateY(90deg);
    -webkit-transform: rotateY(90deg);
    transform: rotateY(90deg);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  100% {
    background: #f86;
    -moz-transform: rotateY(0deg);
    -ms-transform: rotateY(0deg);
    -webkit-transform: rotateY(0deg);
    transform: rotateY(0deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@-moz-keyframes plus-loader-bottom {
  0% {
    background: #fc6;
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  50% {
    background: #fc6;
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  75% {
    background: #4ae;
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  100% {
    background: #4ae;
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@-webkit-keyframes plus-loader-bottom {
  0% {
    background: #fc6;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  50% {
    background: #fc6;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  75% {
    background: #4ae;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  100% {
    background: #4ae;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@keyframes plus-loader-bottom {
  0% {
    background: #fc6;
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  50% {
    background: #fc6;
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  75% {
    background: #4ae;
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  100% {
    background: #4ae;
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@-moz-keyframes plus-loader-background {
  0% {
    background: #f86;
    -moz-transform: rotateZ(180deg);
    transform: rotateZ(180deg);
  }
  25% {
    background: #f86;
    -moz-transform: rotateZ(180deg);
    transform: rotateZ(180deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  27.5% {
    background: #6d7;
    -moz-transform: rotateZ(90deg);
    transform: rotateZ(90deg);
  }
  50% {
    background: #6d7;
    -moz-transform: rotateZ(90deg);
    transform: rotateZ(90deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  52.5% {
    background: #6d7;
    -moz-transform: rotateZ(0deg);
    transform: rotateZ(0deg);
  }
  75% {
    background: #6d7;
    -moz-transform: rotateZ(0deg);
    transform: rotateZ(0deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  77.5% {
    background: #f86;
    -moz-transform: rotateZ(270deg);
    transform: rotateZ(270deg);
  }
  100% {
    background: #f86;
    -moz-transform: rotateZ(270deg);
    transform: rotateZ(270deg);
    -moz-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@-webkit-keyframes plus-loader-background {
  0% {
    background: #f86;
    -webkit-transform: rotateZ(180deg);
    transform: rotateZ(180deg);
  }
  25% {
    background: #f86;
    -webkit-transform: rotateZ(180deg);
    transform: rotateZ(180deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  27.5% {
    background: #6d7;
    -webkit-transform: rotateZ(90deg);
    transform: rotateZ(90deg);
  }
  50% {
    background: #6d7;
    -webkit-transform: rotateZ(90deg);
    transform: rotateZ(90deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  52.5% {
    background: #6d7;
    -webkit-transform: rotateZ(0deg);
    transform: rotateZ(0deg);
  }
  75% {
    background: #6d7;
    -webkit-transform: rotateZ(0deg);
    transform: rotateZ(0deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  77.5% {
    background: #f86;
    -webkit-transform: rotateZ(270deg);
    transform: rotateZ(270deg);
  }
  100% {
    background: #f86;
    -webkit-transform: rotateZ(270deg);
    transform: rotateZ(270deg);
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
@keyframes plus-loader-background {
  0% {
    background: #f86;
    -moz-transform: rotateZ(180deg);
    -ms-transform: rotateZ(180deg);
    -webkit-transform: rotateZ(180deg);
    transform: rotateZ(180deg);
  }
  25% {
    background: #f86;
    -moz-transform: rotateZ(180deg);
    -ms-transform: rotateZ(180deg);
    -webkit-transform: rotateZ(180deg);
    transform: rotateZ(180deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  27.5% {
    background: #6d7;
    -moz-transform: rotateZ(90deg);
    -ms-transform: rotateZ(90deg);
    -webkit-transform: rotateZ(90deg);
    transform: rotateZ(90deg);
  }
  50% {
    background: #6d7;
    -moz-transform: rotateZ(90deg);
    -ms-transform: rotateZ(90deg);
    -webkit-transform: rotateZ(90deg);
    transform: rotateZ(90deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  52.5% {
    background: #6d7;
    -moz-transform: rotateZ(0deg);
    -ms-transform: rotateZ(0deg);
    -webkit-transform: rotateZ(0deg);
    transform: rotateZ(0deg);
  }
  75% {
    background: #6d7;
    -moz-transform: rotateZ(0deg);
    -ms-transform: rotateZ(0deg);
    -webkit-transform: rotateZ(0deg);
    transform: rotateZ(0deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
  77.5% {
    background: #f86;
    -moz-transform: rotateZ(270deg);
    -ms-transform: rotateZ(270deg);
    -webkit-transform: rotateZ(270deg);
    transform: rotateZ(270deg);
  }
  100% {
    background: #f86;
    -moz-transform: rotateZ(270deg);
    -ms-transform: rotateZ(270deg);
    -webkit-transform: rotateZ(270deg);
    transform: rotateZ(270deg);
    -moz-animation-timing-function: step-start;
    -webkit-animation-timing-function: step-start;
    animation-timing-function: step-start;
  }
}
/* :not(:required) hides this rule from IE9 and below */
.plus-loader:not(:required) {
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
  display: inline-block;
  width: 48px;
  height: 48px;
  background: #f86;
  -moz-border-radius: 24px;
  -webkit-border-radius: 24px;
  border-radius: 24px;
  -moz-transform: rotateZ(90deg);
  -ms-transform: rotateZ(90deg);
  -webkit-transform: rotateZ(90deg);
  transform: rotateZ(90deg);
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  -webkit-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
  -moz-animation: plus-loader-background 3s infinite ease-in-out;
  -webkit-animation: plus-loader-background 3s infinite ease-in-out;
  animation: plus-loader-background 3s infinite ease-in-out;
}
.plus-loader:not(:required)::after {
  background: #f86;
  -moz-border-radius: 24px 0 0 24px;
  -webkit-border-radius: 24px;
  border-radius: 24px 0 0 24px;
  content: '';
  position: absolute;
  right: 50%;
  top: 0;
  width: 50%;
  height: 100%;
  -moz-transform-origin: 100% 50%;
  -ms-transform-origin: 100% 50%;
  -webkit-transform-origin: 100% 50%;
  transform-origin: 100% 50%;
  -moz-animation: plus-loader-top 3s infinite linear;
  -webkit-animation: plus-loader-top 3s infinite linear;
  animation: plus-loader-top 3s infinite linear;
}
.plus-loader:not(:required)::before {
  background: #fc6;
  -moz-border-radius: 24px 0 0 24px;
  -webkit-border-radius: 24px;
  border-radius: 24px 0 0 24px;
  content: '';
  position: absolute;
  right: 50%;
  top: 0;
  width: 50%;
  height: 100%;
  -moz-transform-origin: 100% 50%;
  -ms-transform-origin: 100% 50%;
  -webkit-transform-origin: 100% 50%;
  transform-origin: 100% 50%;
  -moz-animation: plus-loader-bottom 3s infinite linear;
  -webkit-animation: plus-loader-bottom 3s infinite linear;
  animation: plus-loader-bottom 3s infinite linear;
}

@-moz-keyframes ball-loader {
  0% {
    -moz-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -moz-transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -moz-transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    -moz-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -moz-transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    -moz-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
}
@-webkit-keyframes ball-loader {
  0% {
    -webkit-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -webkit-transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -webkit-transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    -webkit-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -webkit-transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
}
@keyframes ball-loader {
  0% {
    -moz-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    -ms-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    -webkit-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -moz-transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    -ms-transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    -webkit-transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 0.95, 1);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -moz-transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    -ms-transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    -webkit-transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 0.5, 1);
    -moz-animation-timing-function: linear;
    -webkit-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -moz-transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    -ms-transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    -webkit-transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    transform: translate3d(0, 150px, -10px) scale3d(1, 1.25, 1);
    -moz-animation-timing-function: ease-out;
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
}
@-moz-keyframes ball-loader-highlight {
  0% {
    -moz-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -moz-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -moz-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -moz-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -moz-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -moz-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  100% {
    -moz-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}
@-webkit-keyframes ball-loader-highlight {
  0% {
    -webkit-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -webkit-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -webkit-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -webkit-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -webkit-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  100% {
    -webkit-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}
@keyframes ball-loader-highlight {
  0% {
    -moz-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -ms-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -webkit-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -moz-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -ms-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -webkit-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -moz-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -ms-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -webkit-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -moz-animation-timing-function: linear;
    -webkit-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -moz-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -ms-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -webkit-transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    transform: skew(-30deg, 0) translate3d(0, 0, 1px);
    -moz-animation-timing-function: ease-out;
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  100% {
    -moz-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -ms-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -webkit-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}
@-moz-keyframes ball-loader-shadow {
  0% {
    -moz-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -moz-transform: translate3d(12.5px, -15px, -1px);
    transform: translate3d(12.5px, -15px, -1px);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -moz-transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    -moz-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -moz-transform: translate3d(12.5px, -15px, -1px);
    transform: translate3d(12.5px, -15px, -1px);
    -moz-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  100% {
    -moz-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -moz-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}
@-webkit-keyframes ball-loader-shadow {
  0% {
    -webkit-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -webkit-transform: translate3d(12.5px, -15px, -1px);
    transform: translate3d(12.5px, -15px, -1px);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -webkit-transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    -webkit-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -webkit-transform: translate3d(12.5px, -15px, -1px);
    transform: translate3d(12.5px, -15px, -1px);
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  100% {
    -webkit-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}
@keyframes ball-loader-shadow {
  0% {
    -moz-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -ms-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -webkit-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  45% {
    -moz-transform: translate3d(12.5px, -15px, -1px);
    -ms-transform: translate3d(12.5px, -15px, -1px);
    -webkit-transform: translate3d(12.5px, -15px, -1px);
    transform: translate3d(12.5px, -15px, -1px);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
  50% {
    -moz-transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    -ms-transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    -webkit-transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    transform: translate3d(12.5px, -15px, -1px) scale3d(1, 1, 1);
    -moz-animation-timing-function: linear;
    -webkit-animation-timing-function: linear;
    animation-timing-function: linear;
  }
  55% {
    -moz-transform: translate3d(12.5px, -15px, -1px);
    -ms-transform: translate3d(12.5px, -15px, -1px);
    -webkit-transform: translate3d(12.5px, -15px, -1px);
    transform: translate3d(12.5px, -15px, -1px);
    -moz-animation-timing-function: ease-out;
    -webkit-animation-timing-function: ease-out;
    animation-timing-function: ease-out;
  }
  100% {
    -moz-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -ms-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -webkit-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
    -moz-animation-timing-function: ease-in;
    -webkit-animation-timing-function: ease-in;
    animation-timing-function: ease-in;
  }
}
/* :not(:required) hides this rule from IE9 and below */
.ball-loader:not(:required) {
  position: relative;
  display: inline-block;
  font-size: 0;
  letter-spacing: -1px;
  border-radius: 100%;
  background: #f86;
  width: 50px;
  height: 50px;
  -moz-transform-style: preserve-3d;
  -webkit-transform-style: preserve-3d;
  transform-style: preserve-3d;
  -moz-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
  -ms-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
  -webkit-transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
  transform: translate3d(0, 0, 0) scale3d(1, 1, 1);
  -moz-transform-origin: 0 100%;
  -ms-transform-origin: 0 100%;
  -webkit-transform-origin: 0 100%;
  transform-origin: 0 100%;
  -moz-animation: ball-loader 1500ms infinite linear;
  -webkit-animation: ball-loader 1500ms infinite linear;
  animation: ball-loader 1500ms infinite linear;
}
.ball-loader:not(:required)::after {
  content: '';
  position: absolute;
  top: 4.5px;
  left: 5.5px;
  width: 15px;
  height: 15px;
  background: #ffb099;
  border-radius: 100%;
  -moz-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
  -ms-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
  -webkit-transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
  transform: skew(-20deg, 0) translate3d(0, 2.5px, 1px);
  -moz-animation: ball-loader-highlight 1500ms infinite linear;
  -webkit-animation: ball-loader-highlight 1500ms infinite linear;
  animation: ball-loader-highlight 1500ms infinite linear;
}
.ball-loader:not(:required)::before {
  content: '';
  position: absolute;
  top: 50px;
  left: 5.5px;
  width: 50px;
  height: 15px;
  background: rgba(0, 0, 0, 0.2);
  border-radius: 100%;
  -moz-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
  -ms-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
  -webkit-transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
  transform: translate3d(66.66667px, 66.66667px, -1px) scale3d(1.25, 1.25, 1);
  -moz-animation: ball-loader-shadow 1500ms infinite linear;
  -webkit-animation: ball-loader-shadow 1500ms infinite linear;
  animation: ball-loader-shadow 1500ms infinite linear;
  -webkit-filter: blur(1px);
  filter: blur(1px);
}

@-moz-keyframes hexdots-loader {
  0% {
    -moz-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  8.33% {
    -moz-box-shadow: #666666 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  16.67% {
    -moz-box-shadow: #666666 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  25% {
    -moz-box-shadow: #666666 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  33.33% {
    -moz-box-shadow: #666666 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  41.67% {
    -moz-box-shadow: #666666 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px;
  }
  50% {
    -moz-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px;
  }
  58.33% {
    -moz-box-shadow: #666666 26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px;
    box-shadow: #666666 26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px;
  }
  66.67% {
    -moz-box-shadow: #666666 26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px;
    box-shadow: #666666 26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px;
  }
  75% {
    -moz-box-shadow: #666666 0 30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
    box-shadow: #666666 0 30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
  }
  83.33% {
    -moz-box-shadow: #666666 -26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px;
    box-shadow: #666666 -26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px;
  }
  91.67% {
    -moz-box-shadow: #666666 -26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  100% {
    -moz-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
}
@-webkit-keyframes hexdots-loader {
  0% {
    -webkit-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  8.33% {
    -webkit-box-shadow: #666666 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  16.67% {
    -webkit-box-shadow: #666666 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  25% {
    -webkit-box-shadow: #666666 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  33.33% {
    -webkit-box-shadow: #666666 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  41.67% {
    -webkit-box-shadow: #666666 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px;
  }
  50% {
    -webkit-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px;
  }
  58.33% {
    -webkit-box-shadow: #666666 26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px;
    box-shadow: #666666 26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px;
  }
  66.67% {
    -webkit-box-shadow: #666666 26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px;
    box-shadow: #666666 26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px;
  }
  75% {
    -webkit-box-shadow: #666666 0 30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
    box-shadow: #666666 0 30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
  }
  83.33% {
    -webkit-box-shadow: #666666 -26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px;
    box-shadow: #666666 -26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px;
  }
  91.67% {
    -webkit-box-shadow: #666666 -26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  100% {
    -webkit-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
}
@keyframes hexdots-loader {
  0% {
    -moz-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  8.33% {
    -moz-box-shadow: #666666 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  16.67% {
    -moz-box-shadow: #666666 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  25% {
    -moz-box-shadow: #666666 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  33.33% {
    -moz-box-shadow: #666666 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  41.67% {
    -moz-box-shadow: #666666 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px, #999 -26px -15px 0 7px;
  }
  50% {
    -moz-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px;
    -webkit-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px, #999 0 -30px 0 7px;
  }
  58.33% {
    -moz-box-shadow: #666666 26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px;
    -webkit-box-shadow: #666666 26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px;
    box-shadow: #666666 26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px, #999 26px -15px 0 7px;
  }
  66.67% {
    -moz-box-shadow: #666666 26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px;
    -webkit-box-shadow: #666666 26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px;
    box-shadow: #666666 26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px, #999 26px 15px 0 7px;
  }
  75% {
    -moz-box-shadow: #666666 0 30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
    -webkit-box-shadow: #666666 0 30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
    box-shadow: #666666 0 30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
  }
  83.33% {
    -moz-box-shadow: #666666 -26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px;
    -webkit-box-shadow: #666666 -26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px;
    box-shadow: #666666 -26px 15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px 15px 0 7px;
  }
  91.67% {
    -moz-box-shadow: #666666 -26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 -26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 -26px -15px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
  100% {
    -moz-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    -webkit-box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
    box-shadow: #666666 0 -30px 0 7px, #999 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 -26px 15px 0 7px, #999 -26px -15px 0 7px;
  }
}
/* :not(:required) hides this rule from IE9 and below */
.hexdots-loader:not(:required) {
  overflow: hidden;
  position: relative;
  text-indent: -9999px;
  display: inline-block;
  width: 7px;
  height: 7px;
  background: transparent;
  border-radius: 100%;
  -moz-box-shadow: #666666 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
  -webkit-box-shadow: #666666 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
  box-shadow: #666666 0 -30px 0 7px, #999 26px -15px 0 7px, #999 26px 15px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px, #999 0 30px 0 7px;
  -moz-animation: hexdots-loader 5s infinite ease-in-out;
  -webkit-animation: hexdots-loader 5s infinite ease-in-out;
  animation: hexdots-loader 5s infinite ease-in-out;
  -moz-transform-origin: 50% 50%;
  -ms-transform-origin: 50% 50%;
  -webkit-transform-origin: 50% 50%;
  transform-origin: 50% 50%;
}
