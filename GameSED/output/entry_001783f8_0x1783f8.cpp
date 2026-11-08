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

// Function: entry_001783f8
// Address: 0x1783f8 - 0x178434
void entry_001783f8_0x1783f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001783f8_0x1783f8");
#endif

    switch (ctx->pc) {
        case 0x178408u: goto label_178408;
        default: break;
    }

    ctx->pc = 0x1783f8u;

    // 0x1783f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1783f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783fc: 0x26041020  addiu       $a0, $s0, 0x1020
    ctx->pc = 0x1783fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4128));
    // 0x178400: 0xc067260  jal         func_19C980
    ctx->pc = 0x178400u;
    SET_GPR_U32(ctx, 31, 0x178408u);
    ctx->pc = 0x178404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178400u;
    // 0x178404: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x178400u, 0x178408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178408u;
label_178408:
    // 0x178408: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17840c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x17840cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x178410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178414: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x178414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x178418: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17841c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x17841cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178420: 0x24c67ff0  addiu       $a2, $a2, 0x7FF0
    ctx->pc = 0x178420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32752));
    // 0x178424: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x178424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x178428: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x178428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x17842c: 0xc068620  jal         func_1A1880
    ctx->pc = 0x17842Cu;
    SET_GPR_U32(ctx, 31, 0x178434u);
    ctx->pc = 0x178430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17842Cu;
    // 0x178430: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1880u, 0x17842Cu, 0x178434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178434u;
}
