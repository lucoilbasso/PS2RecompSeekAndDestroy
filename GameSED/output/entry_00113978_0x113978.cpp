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

// Function: entry_00113978
// Address: 0x113978 - 0x1139c8
void entry_00113978_0x113978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113978_0x113978");
#endif

    switch (ctx->pc) {
        case 0x113980u: goto label_113980;
        case 0x1139a0u: goto label_1139a0;
        default: break;
    }

    ctx->pc = 0x113978u;

    // 0x113978: 0xc05abfe  jal         func_16AFF8
    ctx->pc = 0x113978u;
    SET_GPR_U32(ctx, 31, 0x113980u);
    ctx->pc = 0x11397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113978u;
    // 0x11397c: 0x26500098  addiu       $s0, $s2, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AFF8u, 0x113978u, 0x113980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113980u;
label_113980:
    // 0x113980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x113980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113984: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x113984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x113988: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11398c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x11398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x113990: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113994: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x113994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x113998: 0xc055814  jal         func_156050
    ctx->pc = 0x113998u;
    SET_GPR_U32(ctx, 31, 0x1139A0u);
    ctx->pc = 0x11399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113998u;
    // 0x11399c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156050u, 0x113998u, 0x1139A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139A0u;
label_1139a0:
    // 0x1139a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1139a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1139a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1139a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1139A8u;
    {
        const bool branch_taken_0x1139a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1139ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139A8u;
        // 0x1139ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139a8) {
            ctx->pc = 0x1139C8u;
            return;
        }
    }
    ctx->pc = 0x1139B0u;
    // 0x1139b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1139b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1139b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1139b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1139b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1139b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1139bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1139bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1139c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1139C0u;
    {
        const bool branch_taken_0x1139c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1139C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139C0u;
        // 0x1139c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139c0) {
            ctx->pc = 0x1139ECu;
            return;
        }
    }
    ctx->pc = 0x1139C8u;
}
