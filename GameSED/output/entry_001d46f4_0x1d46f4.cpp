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

// Function: entry_001d46f4
// Address: 0x1d46f4 - 0x1d4740
void entry_001d46f4_0x1d46f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d46f4_0x1d46f4");
#endif

    ctx->pc = 0x1d46f4u;

    // 0x1d46f4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d46f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d46fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d46fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d4700: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4700u;
    {
        const bool branch_taken_0x1d4700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4700u;
        // 0x1d4704: 0x35020001  ori         $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4700) {
            ctx->pc = 0x1D4758u;
            return;
        }
    }
    ctx->pc = 0x1D4708u;
    // 0x1d4708: 0x1560000d  bnez        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4708u;
    {
        const bool branch_taken_0x1d4708 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4708u;
        // 0x1d470c: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4708) {
            ctx->pc = 0x1D4740u;
            return;
        }
    }
    ctx->pc = 0x1D4710u;
    // 0x1d4710: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d4710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d4714: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d4718: 0x2442e1c8  addiu       $v0, $v0, -0x1E38
    ctx->pc = 0x1d4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x1d471c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1d4720: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4720u;
    {
        const bool branch_taken_0x1d4720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4720) {
            ctx->pc = 0x1D4724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4720u;
            // 0x1d4724: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4748u;
            return;
        }
    }
    ctx->pc = 0x1D4728u;
    // 0x1d4728: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x1d4728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
    // 0x1d472c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1d472cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4730: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1d4730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x1d4734: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x1d4734u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x1d4738: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4738u;
    {
        const bool branch_taken_0x1d4738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4738u;
        // 0x1d473c: 0xad23000c  sw          $v1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4738) {
            ctx->pc = 0x1D4754u;
            return;
        }
    }
    ctx->pc = 0x1D4740u;
}
