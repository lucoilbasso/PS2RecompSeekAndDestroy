#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _start
// Address: 0x100008 - 0x1001c8
void _start_0x100008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_start_0x100008");
#endif

    switch (ctx->pc) {
        case 0x10012cu: goto label_10012c;
        case 0x10017cu: goto label_10017c;
        case 0x100198u: goto label_100198;
        case 0x1001a0u: goto label_1001a0;
        case 0x1001a8u: goto label_1001a8;
        case 0x1001c0u: goto label_1001c0;
        default: break;
    }

    ctx->pc = 0x100008u;

    // 0x100008: 0x70000c28  padduw      $at, $zero, $zero
    ctx->pc = 0x100008u;
    SET_GPR_VEC(ctx, 1, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10000c: 0x70001428  padduw      $v0, $zero, $zero
    ctx->pc = 0x10000cu;
    SET_GPR_VEC(ctx, 2, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100010: 0x70001c28  padduw      $v1, $zero, $zero
    ctx->pc = 0x100010u;
    SET_GPR_VEC(ctx, 3, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100014: 0x70002428  padduw      $a0, $zero, $zero
    ctx->pc = 0x100014u;
    SET_GPR_VEC(ctx, 4, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100018: 0x70002c28  padduw      $a1, $zero, $zero
    ctx->pc = 0x100018u;
    SET_GPR_VEC(ctx, 5, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10001c: 0x70003428  padduw      $a2, $zero, $zero
    ctx->pc = 0x10001cu;
    SET_GPR_VEC(ctx, 6, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100020: 0x70003c28  padduw      $a3, $zero, $zero
    ctx->pc = 0x100020u;
    SET_GPR_VEC(ctx, 7, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100024: 0x70004428  padduw      $t0, $zero, $zero
    ctx->pc = 0x100024u;
    SET_GPR_VEC(ctx, 8, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100028: 0x70004c28  padduw      $t1, $zero, $zero
    ctx->pc = 0x100028u;
    SET_GPR_VEC(ctx, 9, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10002c: 0x70005428  padduw      $t2, $zero, $zero
    ctx->pc = 0x10002cu;
    SET_GPR_VEC(ctx, 10, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100030: 0x70005c28  padduw      $t3, $zero, $zero
    ctx->pc = 0x100030u;
    SET_GPR_VEC(ctx, 11, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100034: 0x70006428  padduw      $t4, $zero, $zero
    ctx->pc = 0x100034u;
    SET_GPR_VEC(ctx, 12, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100038: 0x70006c28  padduw      $t5, $zero, $zero
    ctx->pc = 0x100038u;
    SET_GPR_VEC(ctx, 13, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10003c: 0x70007428  padduw      $t6, $zero, $zero
    ctx->pc = 0x10003cu;
    SET_GPR_VEC(ctx, 14, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100040: 0x70007c28  padduw      $t7, $zero, $zero
    ctx->pc = 0x100040u;
    SET_GPR_VEC(ctx, 15, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100044: 0x70008428  padduw      $s0, $zero, $zero
    ctx->pc = 0x100044u;
    SET_GPR_VEC(ctx, 16, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100048: 0x70008c28  padduw      $s1, $zero, $zero
    ctx->pc = 0x100048u;
    SET_GPR_VEC(ctx, 17, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10004c: 0x70009428  padduw      $s2, $zero, $zero
    ctx->pc = 0x10004cu;
    SET_GPR_VEC(ctx, 18, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100050: 0x70009c28  padduw      $s3, $zero, $zero
    ctx->pc = 0x100050u;
    SET_GPR_VEC(ctx, 19, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100054: 0x7000a428  padduw      $s4, $zero, $zero
    ctx->pc = 0x100054u;
    SET_GPR_VEC(ctx, 20, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100058: 0x7000ac28  padduw      $s5, $zero, $zero
    ctx->pc = 0x100058u;
    SET_GPR_VEC(ctx, 21, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10005c: 0x7000b428  padduw      $s6, $zero, $zero
    ctx->pc = 0x10005cu;
    SET_GPR_VEC(ctx, 22, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100060: 0x7000bc28  padduw      $s7, $zero, $zero
    ctx->pc = 0x100060u;
    SET_GPR_VEC(ctx, 23, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100064: 0x7000c428  padduw      $t8, $zero, $zero
    ctx->pc = 0x100064u;
    SET_GPR_VEC(ctx, 24, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100068: 0x7000cc28  padduw      $t9, $zero, $zero
    ctx->pc = 0x100068u;
    SET_GPR_VEC(ctx, 25, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10006c: 0x7000e428  padduw      $gp, $zero, $zero
    ctx->pc = 0x10006cu;
    SET_GPR_VEC(ctx, 28, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100070: 0x7000ec28  padduw      $sp, $zero, $zero
    ctx->pc = 0x100070u;
    SET_GPR_VEC(ctx, 29, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100074: 0x7000f428  padduw      $fp, $zero, $zero
    ctx->pc = 0x100074u;
    SET_GPR_VEC(ctx, 30, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x100078: 0x7000fc28  padduw      $ra, $zero, $zero
    ctx->pc = 0x100078u;
    SET_GPR_VEC(ctx, 31, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10007c: 0x11  mthi        $zero
    ctx->pc = 0x10007cu;
    ctx->hi = GPR_U64(ctx, 0);
    // 0x100080: 0x70000011  mthi1       $zero
    ctx->pc = 0x100080u;
    ctx->hi1 = GPR_U64(ctx, 0);
    // 0x100084: 0x13  mtlo        $zero
    ctx->pc = 0x100084u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x100088: 0x70000013  mtlo1       $zero
    ctx->pc = 0x100088u;
    ctx->lo1 = GPR_U64(ctx, 0);
    // 0x10008c: 0x4190000  mtsah       $zero, 0x0
    ctx->pc = 0x10008cu;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)0) & 0x7) << 4;
    // 0x100090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x100090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100094: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x100094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100098: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x100098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10009c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10009cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1000a0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1000a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1000a4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1000a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1000a8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1000a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1000ac: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1000acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1000b0: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1000b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1000b4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1000b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1000b8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1000b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1000bc: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1000bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1000c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1000c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1000c4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1000c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1000c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1000c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1000cc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1000ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1000d0: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1000d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1000d4: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x1000d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1000d8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1000d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1000dc: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x1000dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1000e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1000e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1000e4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1000e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1000e8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1000e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1000ec: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1000ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1000f0: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1000f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1000f4: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x1000f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1000f8: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x1000f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1000fc: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x1000fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x100100: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x100100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x100104: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x100104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x100108: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x100108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x10010c: 0x4480f800  mtc1        $zero, $f31
    ctx->pc = 0x10010cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x100110: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x100110u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x100114: 0x40f  sync.p
    ctx->pc = 0x100114u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x100118: 0x44c0f800  ctc1        $zero, $FpcCsr
    ctx->pc = 0x100118u;
    ctx->fcr31 = GPR_U32(ctx, 0) & 0x0183FFFF;
    // 0x10011c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x100120: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x100120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x100124: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x100124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
    // 0x100128: 0x2463219c  addiu       $v1, $v1, 0x219C
    ctx->pc = 0x100128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8604));
label_10012c:
    // 0x10012c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x10012cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x100130: 0x0  nop
    ctx->pc = 0x100130u;
    // NOP
    // 0x100134: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x100134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x100138: 0x0  nop
    ctx->pc = 0x100138u;
    // NOP
    // 0x10013c: 0x0  nop
    ctx->pc = 0x10013cu;
    // NOP
    // 0x100140: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100140u;
    {
        const bool branch_taken_0x100140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x100144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100140u;
        // 0x100144: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100140) {
            ctx->pc = 0x10012Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10012c;
        }
    }
    ctx->pc = 0x100148u;
    // 0x100148: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x100148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10014c: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x10014cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x100150: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x100150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x100154: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x100154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x100158: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x100158u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x10015c: 0x24844870  addiu       $a0, $a0, 0x4870
    ctx->pc = 0x10015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    // 0x100160: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x100160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x100164: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x100164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x100168: 0x24e7da80  addiu       $a3, $a3, -0x2580
    ctx->pc = 0x100168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957696));
    // 0x10016c: 0x250801d0  addiu       $t0, $t0, 0x1D0
    ctx->pc = 0x10016cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 464));
    // 0x100170: 0x80e02d  daddu       $gp, $a0, $zero
    ctx->pc = 0x100170u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100174: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x100174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x100178: 0xc  syscall     0
    ctx->pc = 0x100178u;
    ctx->pc = 0x10017Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10017c:
    // 0x10017c: 0x40e82d  daddu       $sp, $v0, $zero
    ctx->pc = 0x10017cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100180: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x100180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x100184: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x100184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x100188: 0x2484219c  addiu       $a0, $a0, 0x219C
    ctx->pc = 0x100188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8604));
    // 0x10018c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x10018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x100190: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x100190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x100194: 0xc  syscall     0
    ctx->pc = 0x100194u;
    ctx->pc = 0x100198u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_100198:
    // 0x100198: 0xc06db8a  jal         func_1B6E28
    ctx->pc = 0x100198u;
    SET_GPR_U32(ctx, 31, 0x1001A0u);
    ctx->pc = 0x1B6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E28u, 0x100198u, 0x1001A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001A0u;
label_1001a0:
    // 0x1001a0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1001A0u;
    SET_GPR_U32(ctx, 31, 0x1001A8u);
    ctx->pc = 0x1001A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001A0u;
    // 0x1001a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1001A0u, 0x1001A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001A8u;
label_1001a8:
    // 0x1001a8: 0x42000038  ei
    ctx->pc = 0x1001a8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1001ac: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1001acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1001b0: 0x2442da80  addiu       $v0, $v0, -0x2580
    ctx->pc = 0x1001b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957696));
    // 0x1001b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1001b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x25DA80u));
    // 0x1001b8: 0xc040076  jal         func_1001D8
    ctx->pc = 0x1001B8u;
    SET_GPR_U32(ctx, 31, 0x1001C0u);
    ctx->pc = 0x1001BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001B8u;
    // 0x1001bc: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001D8u, 0x1001B8u, 0x1001C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001C0u;
label_1001c0:
    // 0x1001c0: 0x806dc84  j           func_1B7210
    ctx->pc = 0x1001C0u;
    ctx->pc = 0x1001C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001C0u;
    // 0x1001c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7210u;
    Exit_0x1b7210(rdram, ctx, runtime); return;
    ctx->pc = 0x1001C8u;
}
