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

// Function: entry_001bf344
// Address: 0x1bf344 - 0x1bf3bc
void entry_001bf344_0x1bf344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf344_0x1bf344");
#endif

    switch (ctx->pc) {
        case 0x1bf384u: goto label_1bf384;
        default: break;
    }

    ctx->pc = 0x1bf344u;

    // 0x1bf344: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bf348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf34c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bf34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bf350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf354: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x1bf354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x1bf358: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bf35c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x1bf35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1bf360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf364: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf368: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf36c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf370: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf374: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1bf374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1bf378: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf378u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf37c: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF37Cu;
    SET_GPR_U32(ctx, 31, 0x1BF384u);
    ctx->pc = 0x1BF380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF37Cu;
    // 0x1bf380: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF37Cu, 0x1BF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF384u;
label_1bf384:
    // 0x1bf384: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1bf388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf38c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bf38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bf390: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf390u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf394: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bf394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bf398: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1bf398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1bf39c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf3a0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bf3a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf3a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf3ac: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1bf3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1bf3b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3b4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf3b8: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x1bf3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    ctx->pc = 0x1bf3bcu;
}
