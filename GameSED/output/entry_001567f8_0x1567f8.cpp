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

// Function: entry_001567f8
// Address: 0x1567f8 - 0x156840
void entry_001567f8_0x1567f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001567f8_0x1567f8");
#endif

    switch (ctx->pc) {
        case 0x156820u: goto label_156820;
        case 0x156830u: goto label_156830;
        default: break;
    }

    ctx->pc = 0x1567f8u;

    // 0x1567f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1567f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1567fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1567fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15680c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15680cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156810: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156814: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x156814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x156818: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x156818u;
    SET_GPR_U32(ctx, 31, 0x156820u);
    ctx->pc = 0x15681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156818u;
    // 0x15681c: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F10u, 0x156818u, 0x156820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156820u;
label_156820:
    // 0x156820: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x156820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x156824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156828: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x156828u;
    SET_GPR_U32(ctx, 31, 0x156830u);
    ctx->pc = 0x15682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156828u;
    // 0x15682c: 0x248435c8  addiu       $a0, $a0, 0x35C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x156828u, 0x156830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156830u;
label_156830:
    // 0x156830: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x156830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x156834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156838: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x156838u;
    SET_GPR_U32(ctx, 31, 0x156840u);
    ctx->pc = 0x15683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156838u;
    // 0x15683c: 0x248435b0  addiu       $a0, $a0, 0x35B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x156838u, 0x156840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156840u;
}
