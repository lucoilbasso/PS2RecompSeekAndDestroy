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

// Function: entry_001cf5d4
// Address: 0x1cf5d4 - 0x1cf610
void entry_001cf5d4_0x1cf5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf5d4_0x1cf5d4");
#endif

    switch (ctx->pc) {
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf5f8u: goto label_1cf5f8;
        default: break;
    }

    ctx->pc = 0x1cf5d4u;

    // 0x1cf5d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf5d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf5dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf5e0: 0x2610e1b0  addiu       $s0, $s0, -0x1E50
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959536));
    // 0x1cf5e4: 0xc074066  jal         func_1D0198
    ctx->pc = 0x1CF5E4u;
    SET_GPR_U32(ctx, 31, 0x1CF5ECu);
    ctx->pc = 0x1CF5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5E4u;
    // 0x1cf5e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0198u, 0x1CF5E4u, 0x1CF5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5ECu;
label_1cf5ec:
    // 0x1cf5ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf5f0: 0xc07517a  jal         func_1D45E8
    ctx->pc = 0x1CF5F0u;
    SET_GPR_U32(ctx, 31, 0x1CF5F8u);
    ctx->pc = 0x1CF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF5F0u;
    // 0x1cf5f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45E8u, 0x1CF5F0u, 0x1CF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5F8u;
label_1cf5f8:
    // 0x1cf5f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf608: 0x8074086  j           func_1D0218
    ctx->pc = 0x1CF608u;
    ctx->pc = 0x1CF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF608u;
    // 0x1cf60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0218u;
    ps2___malloc_unlock_0x1d0218(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF610u;
}
