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

// Function: entry_0011b570
// Address: 0x11b570 - 0x11b5a0
void entry_0011b570_0x11b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b570_0x11b570");
#endif

    switch (ctx->pc) {
        case 0x11b59cu: goto label_11b59c;
        default: break;
    }

    ctx->pc = 0x11b570u;

    // 0x11b570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b57c: 0x24c6b510  addiu       $a2, $a2, -0x4AF0
    ctx->pc = 0x11b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948112));
    // 0x11b580: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x11b580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x11b584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b588: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x11b588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x11b58c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x11b58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x11b590: 0x260800c0  addiu       $t0, $s0, 0xC0
    ctx->pc = 0x11b590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x11b594: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x11B594u;
    SET_GPR_U32(ctx, 31, 0x11B59Cu);
    ctx->pc = 0x11B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B594u;
    // 0x11b598: 0x240907f8  addiu       $t1, $zero, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x11B594u, 0x11B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B59Cu;
label_11b59c:
    // 0x11b59c: 0x0  nop
    ctx->pc = 0x11b59cu;
    // NOP
    ctx->pc = 0x11b5a0u;
}
