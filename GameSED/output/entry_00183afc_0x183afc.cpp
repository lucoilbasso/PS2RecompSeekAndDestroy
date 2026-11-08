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

// Function: entry_00183afc
// Address: 0x183afc - 0x183b30
void entry_00183afc_0x183afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183afc_0x183afc");
#endif

    switch (ctx->pc) {
        case 0x183b0cu: goto label_183b0c;
        case 0x183b14u: goto label_183b14;
        default: break;
    }

    ctx->pc = 0x183afcu;

    // 0x183afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x183b04: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x183B04u;
    SET_GPR_U32(ctx, 31, 0x183B0Cu);
    ctx->pc = 0x183B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B04u;
    // 0x183b08: 0x24040805  addiu       $a0, $zero, 0x805 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x183B04u, 0x183B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B0Cu;
label_183b0c:
    // 0x183b0c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x183B0Cu;
    SET_GPR_U32(ctx, 31, 0x183B14u);
    ctx->pc = 0x183B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B0Cu;
    // 0x183b10: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x183B0Cu, 0x183B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B14u;
label_183b14:
    // 0x183b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b1c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x183b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x183b20: 0x2442fd28  addiu       $v0, $v0, -0x2D8
    ctx->pc = 0x183b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966568));
    // 0x183b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b28: 0xc060ed6  jal         func_183B58
    ctx->pc = 0x183B28u;
    SET_GPR_U32(ctx, 31, 0x183B30u);
    ctx->pc = 0x183B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183B28u;
    // 0x183b2c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183B58u, 0x183B28u, 0x183B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B30u;
}
