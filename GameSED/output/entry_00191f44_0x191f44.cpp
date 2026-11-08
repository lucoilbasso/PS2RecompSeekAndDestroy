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

// Function: entry_00191f44
// Address: 0x191f44 - 0x191fe8
void entry_00191f44_0x191f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f44_0x191f44");
#endif

    switch (ctx->pc) {
        case 0x191f80u: goto label_191f80;
        default: break;
    }

    ctx->pc = 0x191f44u;

    // 0x191f44: 0x2091023  subu        $v0, $s0, $t1
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x191f48: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x191f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x191f4c: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x191f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x191f50: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x191f54: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x191f58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x191f5c: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x191f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x191f60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x191f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x191f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f68: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x191f68u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x191f6c: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x191f70: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x191f74: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x191f78: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x191F78u;
    SET_GPR_U32(ctx, 31, 0x191F80u);
    ctx->pc = 0x191F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F78u;
    // 0x191f7c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x191F78u, 0x191F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F80u;
label_191f80:
    // 0x191f80: 0x26a300d0  addiu       $v1, $s5, 0xD0
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x191f84: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x191f84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191f88: 0xfe220240  sd          $v0, 0x240($s1)
    ctx->pc = 0x191f88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 576), GPR_U64(ctx, 2));
    // 0x191f8c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x191f8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x191f90: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x191f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x191f94: 0xfe240248  sd          $a0, 0x248($s1)
    ctx->pc = 0x191f94u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 584), GPR_U64(ctx, 4));
    // 0x191f98: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x191f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x191f9c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x191f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191fa0: 0x8c730158  lw          $s3, 0x158($v1)
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x191fa4: 0x12600194  beqz        $s3, . + 4 + (0x194 << 2)
    ctx->pc = 0x191FA4u;
    {
        const bool branch_taken_0x191fa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FA4u;
        // 0x191fa8: 0x141f3c  dsll32      $v1, $s4, 28 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fa4) {
            ctx->pc = 0x1925F8u;
            return;
        }
    }
    ctx->pc = 0x191FACu;
    // 0x191fac: 0x26340100  addiu       $s4, $s1, 0x100
    ctx->pc = 0x191facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x191fb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x191fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191fb4: 0x1223fc  dsll32      $a0, $s2, 15
    ctx->pc = 0x191fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 15));
    // 0x191fb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x191fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191fbc: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x191fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x191fc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x191fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x191fc4: 0x26240250  addiu       $a0, $s1, 0x250
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x191fc8: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x191fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
    // 0x191fcc: 0x263e0140  addiu       $fp, $s1, 0x140
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x191fd0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x191fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x191fd4: 0x26370180  addiu       $s7, $s1, 0x180
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x191fd8: 0x26350230  addiu       $s5, $s1, 0x230
    ctx->pc = 0x191fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x191fdc: 0x26320210  addiu       $s2, $s1, 0x210
    ctx->pc = 0x191fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x191fe0: 0x262c01f0  addiu       $t4, $s1, 0x1F0
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x191fe4: 0x262b0200  addiu       $t3, $s1, 0x200
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    ctx->pc = 0x191fe8u;
}
