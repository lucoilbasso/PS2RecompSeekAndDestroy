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

// Function: entry_00156c00
// Address: 0x156c00 - 0x156c28
void entry_00156c00_0x156c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c00_0x156c00");
#endif

    ctx->pc = 0x156c00u;

    // 0x156c00: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x156c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x156c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156c0c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x156c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x156c10: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x156C10u;
    {
        const bool branch_taken_0x156c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156c10) {
            ctx->pc = 0x156C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156C10u;
            // 0x156c14: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156C50u;
            return;
        }
    }
    ctx->pc = 0x156C18u;
    // 0x156c18: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x156c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x156c1c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x156C1Cu;
    {
        const bool branch_taken_0x156c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x156C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C1Cu;
        // 0x156c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c1c) {
            ctx->pc = 0x156C4Cu;
            return;
        }
    }
    ctx->pc = 0x156C24u;
    // 0x156c24: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x156c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->pc = 0x156c28u;
}
