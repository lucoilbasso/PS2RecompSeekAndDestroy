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

// Function: entry_001895bc
// Address: 0x1895bc - 0x1895ec
void entry_001895bc_0x1895bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001895bc_0x1895bc");
#endif

    switch (ctx->pc) {
        case 0x1895ccu: goto label_1895cc;
        case 0x1895d4u: goto label_1895d4;
        default: break;
    }

    ctx->pc = 0x1895bcu;

    // 0x1895bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1895bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1895c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1895c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1895c4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1895C4u;
    SET_GPR_U32(ctx, 31, 0x1895CCu);
    ctx->pc = 0x1895C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895C4u;
    // 0x1895c8: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1895C4u, 0x1895CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895CCu;
label_1895cc:
    // 0x1895cc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1895CCu;
    SET_GPR_U32(ctx, 31, 0x1895D4u);
    ctx->pc = 0x1895D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895CCu;
    // 0x1895d0: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1895CCu, 0x1895D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895D4u;
label_1895d4:
    // 0x1895d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1895d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1895d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1895dc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1895dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1895e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1895e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895e4: 0xc062584  jal         func_189610
    ctx->pc = 0x1895E4u;
    SET_GPR_U32(ctx, 31, 0x1895ECu);
    ctx->pc = 0x1895E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895E4u;
    // 0x1895e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189610u, 0x1895E4u, 0x1895ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895ECu;
}
