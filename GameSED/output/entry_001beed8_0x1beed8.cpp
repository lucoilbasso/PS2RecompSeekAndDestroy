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

// Function: entry_001beed8
// Address: 0x1beed8 - 0x1bef64
void entry_001beed8_0x1beed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beed8_0x1beed8");
#endif

    switch (ctx->pc) {
        case 0x1bef1cu: goto label_1bef1c;
        case 0x1bef5cu: goto label_1bef5c;
        default: break;
    }

    ctx->pc = 0x1beed8u;

    // 0x1beed8: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BEED8u;
    {
        const bool branch_taken_0x1beed8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x1BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED8u;
        // 0x1beedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed8) {
            ctx->pc = 0x1BEF64u;
            return;
        }
    }
    ctx->pc = 0x1BEEE0u;
    // 0x1beee0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1beee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1beee4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1beee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1beee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beeec: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1beeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1beef0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1beef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1beef4: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1beef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1beef8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1beef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beefc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1beefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bef00: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bef00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bef04: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bef04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bef08: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bef08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef0c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1bef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1bef10: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bef10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef14: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEF14u;
    SET_GPR_U32(ctx, 31, 0x1BEF1Cu);
    ctx->pc = 0x1BEF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF14u;
    // 0x1bef18: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEF14u, 0x1BEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF1Cu;
label_1bef1c:
    // 0x1bef1c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1bef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bef20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef24: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bef28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef2c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bef30: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bef30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bef34: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x1bef34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1bef38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef3c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bef40: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bef40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bef44: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bef48: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef4c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1bef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1bef50: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1bef50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef54: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEF54u;
    SET_GPR_U32(ctx, 31, 0x1BEF5Cu);
    ctx->pc = 0x1BEF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF54u;
    // 0x1bef58: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEF54u, 0x1BEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF5Cu;
label_1bef5c:
    // 0x1bef5c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1BEF5Cu;
    {
        const bool branch_taken_0x1bef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF5Cu;
        // 0x1bef60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef5c) {
            ctx->pc = 0x1BF2E4u;
            return;
        }
    }
    ctx->pc = 0x1BEF64u;
}
