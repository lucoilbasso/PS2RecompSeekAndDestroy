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

// Function: entry_00198d8c
// Address: 0x198d8c - 0x198dbc
void entry_00198d8c_0x198d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d8c_0x198d8c");
#endif

    switch (ctx->pc) {
        case 0x198d9cu: goto label_198d9c;
        case 0x198da4u: goto label_198da4;
        default: break;
    }

    ctx->pc = 0x198d8cu;

    // 0x198d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x198d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x198d94: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x198D94u;
    SET_GPR_U32(ctx, 31, 0x198D9Cu);
    ctx->pc = 0x198D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D94u;
    // 0x198d98: 0x24040946  addiu       $a0, $zero, 0x946 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x198D94u, 0x198D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D9Cu;
label_198d9c:
    // 0x198d9c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x198D9Cu;
    SET_GPR_U32(ctx, 31, 0x198DA4u);
    ctx->pc = 0x198DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D9Cu;
    // 0x198da0: 0x24040600  addiu       $a0, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x198D9Cu, 0x198DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DA4u;
label_198da4:
    // 0x198da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198da8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x198da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x198dac: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x198dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
    // 0x198db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198db4: 0xc065eac  jal         func_197AB0
    ctx->pc = 0x198DB4u;
    SET_GPR_U32(ctx, 31, 0x198DBCu);
    ctx->pc = 0x198DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DB4u;
    // 0x198db8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197AB0u, 0x198DB4u, 0x198DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DBCu;
}
