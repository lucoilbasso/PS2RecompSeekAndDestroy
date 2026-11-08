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

// Function: entry_00140fac
// Address: 0x140fac - 0x140ff0
void entry_00140fac_0x140fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140fac_0x140fac");
#endif

    ctx->pc = 0x140facu;

    // 0x140fac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x140facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x140fb0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x140fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x140fb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x140fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x140fb8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x140fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x140fbc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x140fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x140fc0: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x140fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140fc4: 0x3293000f  andi        $s3, $s4, 0xF
    ctx->pc = 0x140fc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x140fc8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x140fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x140fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140FCCu;
    {
        const bool branch_taken_0x140fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FCCu;
        // 0x140fd0: 0x8e150010  lw          $s5, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fcc) {
            ctx->pc = 0x140FF0u;
            return;
        }
    }
    ctx->pc = 0x140FD4u;
    // 0x140fd4: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x140FD4u;
    {
        const bool branch_taken_0x140fd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x140fd4) {
            ctx->pc = 0x140FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140FD4u;
            // 0x140fd8: 0x8ea2001c  lw          $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141010u;
            return;
        }
    }
    ctx->pc = 0x140FDCu;
    // 0x140fdc: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x140FDCu;
    {
        const bool branch_taken_0x140fdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FDCu;
        // 0x140fe0: 0x32830070  andi        $v1, $s4, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fdc) {
            ctx->pc = 0x141008u;
            return;
        }
    }
    ctx->pc = 0x140FE4u;
    // 0x140fe4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x140FE4u;
    {
        const bool branch_taken_0x140fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140fe4) {
            ctx->pc = 0x141060u;
            return;
        }
    }
    ctx->pc = 0x140FECu;
    // 0x140fec: 0x0  nop
    ctx->pc = 0x140fecu;
    // NOP
    ctx->pc = 0x140ff0u;
}
