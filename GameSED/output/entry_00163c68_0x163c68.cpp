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

// Function: entry_00163c68
// Address: 0x163c68 - 0x163ce8
void entry_00163c68_0x163c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163c68_0x163c68");
#endif

    switch (ctx->pc) {
        case 0x163cacu: goto label_163cac;
        case 0x163ce0u: goto label_163ce0;
        default: break;
    }

    ctx->pc = 0x163c68u;

    // 0x163c68: 0x12e0002e  beqz        $s7, . + 4 + (0x2E << 2)
    ctx->pc = 0x163C68u;
    {
        const bool branch_taken_0x163c68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C68u;
        // 0x163c6c: 0x265001f0  addiu       $s0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c68) {
            ctx->pc = 0x163D24u;
            return;
        }
    }
    ctx->pc = 0x163C70u;
    // 0x163c70: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x163c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x163c74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x163c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x163c78: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x163C78u;
    {
        const bool branch_taken_0x163c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C78u;
        // 0x163c7c: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c78) {
            ctx->pc = 0x163D24u;
            return;
        }
    }
    ctx->pc = 0x163C80u;
    // 0x163c80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163c84: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x163C84u;
    {
        const bool branch_taken_0x163c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C84u;
        // 0x163c88: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c84) {
            ctx->pc = 0x163D24u;
            return;
        }
    }
    ctx->pc = 0x163C8Cu;
    // 0x163c8c: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x163c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x163c90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c98: 0xafb70034  sw          $s7, 0x34($sp)
    ctx->pc = 0x163c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 23));
    // 0x163c9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ca4: 0xc0618da  jal         func_186368
    ctx->pc = 0x163CA4u;
    SET_GPR_U32(ctx, 31, 0x163CACu);
    ctx->pc = 0x163CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CA4u;
    // 0x163ca8: 0x8c530034  lw          $s3, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163CA4u, 0x163CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CACu;
label_163cac:
    // 0x163cac: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x163cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x163cb0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x163CB0u;
    {
        const bool branch_taken_0x163cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163cb0) {
            ctx->pc = 0x163CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163CB0u;
            // 0x163cb4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163D08u;
            return;
        }
    }
    ctx->pc = 0x163CB8u;
    // 0x163cb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163cbc: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x163cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x163cc0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x163cc4: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x163cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x163cc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163CC8u;
    {
        const bool branch_taken_0x163cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CC8u;
        // 0x163ccc: 0x8e080048  lw          $t0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cc8) {
            ctx->pc = 0x163CE8u;
            return;
        }
    }
    ctx->pc = 0x163CD0u;
    // 0x163cd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cd8: 0xc0618da  jal         func_186368
    ctx->pc = 0x163CD8u;
    SET_GPR_U32(ctx, 31, 0x163CE0u);
    ctx->pc = 0x163CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CD8u;
    // 0x163cdc: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x163CD8u, 0x163CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CE0u;
label_163ce0:
    // 0x163ce0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x163CE0u;
    {
        const bool branch_taken_0x163ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CE0u;
        // 0x163ce4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce0) {
            ctx->pc = 0x163D08u;
            return;
        }
    }
    ctx->pc = 0x163CE8u;
}
