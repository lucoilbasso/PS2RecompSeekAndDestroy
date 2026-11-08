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

// Function: entry_001d5acc
// Address: 0x1d5acc - 0x1d5b08
void entry_001d5acc_0x1d5acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5acc_0x1d5acc");
#endif

    ctx->pc = 0x1d5accu;

    // 0x1d5acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5ad0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5ad4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d5ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ad8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d5adc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d5adcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ae0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d5ae8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d5aec: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d5af0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5af4: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x1d5af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d5af8: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x1d5af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d5afc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5AFCu;
    {
        const bool branch_taken_0x1d5afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AFCu;
        // 0x1d5b00: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5afc) {
            ctx->pc = 0x1D5B24u;
            return;
        }
    }
    ctx->pc = 0x1D5B04u;
    // 0x1d5b04: 0x0  nop
    ctx->pc = 0x1d5b04u;
    // NOP
    ctx->pc = 0x1d5b08u;
}
