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

// Function: entry_001aac20
// Address: 0x1aac20 - 0x1aad00
void entry_001aac20_0x1aac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aac20_0x1aac20");
#endif

    switch (ctx->pc) {
        case 0x1aacc4u: goto label_1aacc4;
        default: break;
    }

    ctx->pc = 0x1aac20u;

    // 0x1aac20: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1aac20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aac24: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x1aac24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1aac28: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x1aac28u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x1aac2c: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1aac30: 0x7e420140  sq          $v0, 0x140($s2)
    ctx->pc = 0x1aac30u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 2));
    // 0x1aac34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1aac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aac38: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x1aac38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1aac3c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1aac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aac40: 0xde460140  ld          $a2, 0x140($s2)
    ctx->pc = 0x1aac40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x1aac44: 0x137100b  movn        $v0, $t1, $s7
    ctx->pc = 0x1aac44u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x1aac48: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1aac48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1aac4c: 0x137180b  movn        $v1, $t1, $s7
    ctx->pc = 0x1aac4cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x1aac50: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1aac50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1aac54: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1aac54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aac58: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1aac58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1aac5c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1aac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1aac60: 0xde470058  ld          $a3, 0x58($s2)
    ctx->pc = 0x1aac60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1aac64: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1aac64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1aac68: 0xde480148  ld          $t0, 0x148($s2)
    ctx->pc = 0x1aac68u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1aac6c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1aac6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aac70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aac74: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x1aac74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x1aac78: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1aac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1aac7c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1aac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1aac80: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1aac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1aac84: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1aac84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1aac88: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1aac88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aac8c: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x1aac8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1aac90: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1aac90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1aac94: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1aac94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1aac98: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1aac98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aac9c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1aac9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1aaca0: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1aaca0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1aaca4: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x1aaca4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x1aaca8: 0xfe460140  sd          $a2, 0x140($s2)
    ctx->pc = 0x1aaca8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 6));
    // 0x1aacac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1aacacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacb0: 0xfe470058  sd          $a3, 0x58($s2)
    ctx->pc = 0x1aacb0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 7));
    // 0x1aacb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1aacb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacb8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1aacb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacbc: 0xc06af46  jal         func_1ABD18
    ctx->pc = 0x1AACBCu;
    SET_GPR_U32(ctx, 31, 0x1AACC4u);
    ctx->pc = 0x1AACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACBCu;
    // 0x1aacc0: 0xfe480148  sd          $t0, 0x148($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 328), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD18u, 0x1AACBCu, 0x1AACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACC4u;
label_1aacc4:
    // 0x1aacc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1aacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aacc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aacc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aacd0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1aacd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1aacd4: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1aacd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1aacd8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1aacd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aacdc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1aacdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1aace0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aace4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1aace4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1aace8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aace8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aacec: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AACECu;
    {
        const bool branch_taken_0x1aacec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACECu;
        // 0x1aacf0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacec) {
            ctx->pc = 0x1AAD00u;
            return;
        }
    }
    ctx->pc = 0x1AACF4u;
    // 0x1aacf4: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1aacf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aacf8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AACF8u;
    {
        const bool branch_taken_0x1aacf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACF8u;
        // 0x1aacfc: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacf8) {
            ctx->pc = 0x1AAD3Cu;
            return;
        }
    }
    ctx->pc = 0x1AAD00u;
}
