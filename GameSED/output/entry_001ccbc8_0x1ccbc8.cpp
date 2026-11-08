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

// Function: entry_001ccbc8
// Address: 0x1ccbc8 - 0x1ccc24
void entry_001ccbc8_0x1ccbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccbc8_0x1ccbc8");
#endif

    switch (ctx->pc) {
        case 0x1ccbe4u: goto label_1ccbe4;
        case 0x1ccc20u: goto label_1ccc20;
        default: break;
    }

    ctx->pc = 0x1ccbc8u;

    // 0x1ccbc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccbcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccbd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ccbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ccbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ccbd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ccbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ccbdc: 0xc07358e  jal         func_1CD638
    ctx->pc = 0x1CCBDCu;
    SET_GPR_U32(ctx, 31, 0x1CCBE4u);
    ctx->pc = 0x1CCBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBDCu;
    // 0x1ccbe0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD638u, 0x1CCBDCu, 0x1CCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBE4u;
label_1ccbe4:
    // 0x1ccbe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ccbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbe8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ccbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1ccbec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ccbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccbf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccbf4: 0x2442cb58  addiu       $v0, $v0, -0x34A8
    ctx->pc = 0x1ccbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953816));
    // 0x1ccbf8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1ccbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1ccbfc: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x1ccbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x1ccc00: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x1ccc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x1ccc04: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1ccc04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ccc08: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x1ccc08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ccc0c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1ccc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1ccc10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ccc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ccc14: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x1ccc14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x1ccc18: 0xc0734a6  jal         func_1CD298
    ctx->pc = 0x1CCC18u;
    SET_GPR_U32(ctx, 31, 0x1CCC20u);
    ctx->pc = 0x1CCC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC18u;
    // 0x1ccc1c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x1CCC18u, 0x1CCC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC20u;
label_1ccc20:
    // 0x1ccc20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ccc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1ccc24u;
}
