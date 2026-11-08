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

// Function: entry_001ceab8
// Address: 0x1ceab8 - 0x1ceb00
void entry_001ceab8_0x1ceab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceab8_0x1ceab8");
#endif

    ctx->pc = 0x1ceab8u;

    // 0x1ceab8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CEAB8u;
    {
        const bool branch_taken_0x1ceab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAB8u;
        // 0x1ceabc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceab8) {
            ctx->pc = 0x1CEB00u;
            return;
        }
    }
    ctx->pc = 0x1CEAC0u;
    // 0x1ceac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ceac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ceac4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ceac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ceac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceacc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ceaccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cead0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cead0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cead4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cead4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cead8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceadc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ceadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceae0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ceae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ceae4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ceae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ceae8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ceae8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceaec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ceaecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ceaf0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ceaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ceaf4: 0x8072f52  j           func_1CBD48
    ctx->pc = 0x1CEAF4u;
    ctx->pc = 0x1CEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAF4u;
    // 0x1ceaf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD48u;
    upcast__C16__user_type_infoRC9type_infoPvPPv_0x1cbd48(rdram, ctx, runtime); return;
    ctx->pc = 0x1CEAFCu;
    // 0x1ceafc: 0x0  nop
    ctx->pc = 0x1ceafcu;
    // NOP
    ctx->pc = 0x1ceb00u;
}
