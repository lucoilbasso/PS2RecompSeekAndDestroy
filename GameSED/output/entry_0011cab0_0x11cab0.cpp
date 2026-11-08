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

// Function: entry_0011cab0
// Address: 0x11cab0 - 0x11cad8
void entry_0011cab0_0x11cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cab0_0x11cab0");
#endif

    switch (ctx->pc) {
        case 0x11cab8u: goto label_11cab8;
        default: break;
    }

    ctx->pc = 0x11cab0u;

    // 0x11cab0: 0xc0472be  jal         func_11CAF8
    ctx->pc = 0x11CAB0u;
    SET_GPR_U32(ctx, 31, 0x11CAB8u);
    ctx->pc = 0x11CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CAF8u, 0x11CAB0u, 0x11CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAB8u;
label_11cab8:
    // 0x11cab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cabc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11cabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11cac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cacc: 0x80472d2  j           func_11CB48
    ctx->pc = 0x11CACCu;
    ctx->pc = 0x11CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CACCu;
    // 0x11cad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB48u;
    ApMCardDataLoadSingle__FP8ApcMCardi_0x11cb48(rdram, ctx, runtime); return;
    ctx->pc = 0x11CAD4u;
    // 0x11cad4: 0x0  nop
    ctx->pc = 0x11cad4u;
    // NOP
    ctx->pc = 0x11cad8u;
}
