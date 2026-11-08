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

// Function: entry_001cdad0
// Address: 0x1cdad0 - 0x1cdb24
void entry_001cdad0_0x1cdad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdad0_0x1cdad0");
#endif

    ctx->pc = 0x1cdad0u;

    // 0x1cdad0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdad4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1cdad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1cdad8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CDAD8u;
    {
        const bool branch_taken_0x1cdad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdad8) {
            ctx->pc = 0x1CDB30u;
            return;
        }
    }
    ctx->pc = 0x1CDAE0u;
    // 0x1cdae0: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cdae4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1cdae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cdae8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CDAE8u;
    {
        const bool branch_taken_0x1cdae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdae8) {
            ctx->pc = 0x1CDB30u;
            return;
        }
    }
    ctx->pc = 0x1CDAF0u;
    // 0x1cdaf0: 0x112b000c  beq         $t1, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x1CDAF0u;
    {
        const bool branch_taken_0x1cdaf0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        ctx->pc = 0x1CDAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAF0u;
        // 0x1cdaf4: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaf0) {
            ctx->pc = 0x1CDB24u;
            return;
        }
    }
    ctx->pc = 0x1CDAF8u;
    // 0x1cdaf8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1cdafc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cdb00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cdb04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cdb08: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1cdb08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cdb0c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDB0Cu;
    {
        const bool branch_taken_0x1cdb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb0c) {
            ctx->pc = 0x1CDB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB0Cu;
            // 0x1cdb10: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB4Cu;
            return;
        }
    }
    ctx->pc = 0x1CDB14u;
    // 0x1cdb14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdb18: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1cdb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cdb1c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1CDB1Cu;
    {
        const bool branch_taken_0x1cdb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb1c) {
            ctx->pc = 0x1CDB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDB1Cu;
            // 0x1cdb20: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB4Cu;
            return;
        }
    }
    ctx->pc = 0x1CDB24u;
}
