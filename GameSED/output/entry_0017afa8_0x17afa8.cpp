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

// Function: entry_0017afa8
// Address: 0x17afa8 - 0x17afe4
void entry_0017afa8_0x17afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017afa8_0x17afa8");
#endif

    switch (ctx->pc) {
        case 0x17afc0u: goto label_17afc0;
        case 0x17afd8u: goto label_17afd8;
        default: break;
    }

    ctx->pc = 0x17afa8u;

    // 0x17afa8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x17afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x17afac: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x17afacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x17afb0: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x17afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x17afb4: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x17afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x17afb8: 0xc05e9ee  jal         func_17A7B8
    ctx->pc = 0x17AFB8u;
    SET_GPR_U32(ctx, 31, 0x17AFC0u);
    ctx->pc = 0x17AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFB8u;
    // 0x17afbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7B8u, 0x17AFB8u, 0x17AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFC0u;
label_17afc0:
    // 0x17afc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17afc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afc8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17afc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afcc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x17afccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17afd0: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x17AFD0u;
    SET_GPR_U32(ctx, 31, 0x17AFD8u);
    ctx->pc = 0x17AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFD0u;
    // 0x17afd4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x17AFD0u, 0x17AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AFD8u;
label_17afd8:
    // 0x17afd8: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x17afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x17afdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17afe0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x17afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    ctx->pc = 0x17afe4u;
}
