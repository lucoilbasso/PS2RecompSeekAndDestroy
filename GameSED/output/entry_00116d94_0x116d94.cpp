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

// Function: entry_00116d94
// Address: 0x116d94 - 0x116ddc
void entry_00116d94_0x116d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d94_0x116d94");
#endif

    switch (ctx->pc) {
        case 0x116db4u: goto label_116db4;
        case 0x116dc8u: goto label_116dc8;
        default: break;
    }

    ctx->pc = 0x116d94u;

    // 0x116d94: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116d98: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116d9c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x116d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116da0: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x116da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x116da4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116da8: 0x8e10d528  lw          $s0, -0x2AD8($s0)
    ctx->pc = 0x116da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956328)));
    // 0x116dac: 0xc041882  jal         func_106208
    ctx->pc = 0x116DACu;
    SET_GPR_U32(ctx, 31, 0x116DB4u);
    ctx->pc = 0x116DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DACu;
    // 0x116db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116DACu, 0x116DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DB4u;
label_116db4:
    // 0x116db4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x116db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x116db8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116dbc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116dc0: 0xc041882  jal         func_106208
    ctx->pc = 0x116DC0u;
    SET_GPR_U32(ctx, 31, 0x116DC8u);
    ctx->pc = 0x116DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DC0u;
    // 0x116dc4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x116DC0u, 0x116DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DC8u;
label_116dc8:
    // 0x116dc8: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x116dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x116dcc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x116dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x116dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x116dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dd8: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x116dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x116ddcu;
}
