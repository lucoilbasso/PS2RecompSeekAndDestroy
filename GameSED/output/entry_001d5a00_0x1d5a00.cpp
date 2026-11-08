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

// Function: entry_001d5a00
// Address: 0x1d5a00 - 0x1d5a38
void entry_001d5a00_0x1d5a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a00_0x1d5a00");
#endif

    switch (ctx->pc) {
        case 0x1d5a24u: goto label_1d5a24;
        default: break;
    }

    ctx->pc = 0x1d5a00u;

    // 0x1d5a00: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x1d5a04: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D5A04u;
    {
        const bool branch_taken_0x1d5a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A04u;
        // 0x1d5a08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a04) {
            ctx->pc = 0x1D5A98u;
            return;
        }
    }
    ctx->pc = 0x1D5A0Cu;
    // 0x1d5a0c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1d5a10: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5A10u;
    {
        const bool branch_taken_0x1d5a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A10u;
        // 0x1d5a14: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a10) {
            ctx->pc = 0x1D5A64u;
            return;
        }
    }
    ctx->pc = 0x1D5A18u;
    // 0x1d5a18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a1c: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x1D5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A24u);
    ctx->pc = 0x1D5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A1Cu;
    // 0x1d5a20: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x1D5A1Cu, 0x1D5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A24u;
label_1d5a24:
    // 0x1d5a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a28: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x1d5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x1d5a2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D5A2Cu;
    {
        const bool branch_taken_0x1d5a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A2Cu;
        // 0x1d5a30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a2c) {
            ctx->pc = 0x1D5A60u;
            return;
        }
    }
    ctx->pc = 0x1D5A34u;
    // 0x1d5a34: 0x0  nop
    ctx->pc = 0x1d5a34u;
    // NOP
    ctx->pc = 0x1d5a38u;
}
