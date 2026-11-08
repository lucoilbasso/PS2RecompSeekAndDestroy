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

// Function: entry_0012ebd8
// Address: 0x12ebd8 - 0x12ec08
void entry_0012ebd8_0x12ebd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ebd8_0x12ebd8");
#endif

    ctx->pc = 0x12ebd8u;

    // 0x12ebd8: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
    ctx->pc = 0x12EBD8u;
    {
        const bool branch_taken_0x12ebd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBD8u;
        // 0x12ebdc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebd8) {
            ctx->pc = 0x12ED1Cu;
            return;
        }
    }
    ctx->pc = 0x12EBE0u;
    // 0x12ebe0: 0x96230132  lhu         $v1, 0x132($s1)
    ctx->pc = 0x12ebe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x12ebe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebe8: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12EBE8u;
    {
        const bool branch_taken_0x12ebe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBE8u;
        // 0x12ebec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebe8) {
            ctx->pc = 0x12EC98u;
            return;
        }
    }
    ctx->pc = 0x12EBF0u;
    // 0x12ebf0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EBF0u;
    {
        const bool branch_taken_0x12ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebf0) {
            ctx->pc = 0x12EBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EBF0u;
            // 0x12ebf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC08u;
            return;
        }
    }
    ctx->pc = 0x12EBF8u;
    // 0x12ebf8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EBF8u;
    {
        const bool branch_taken_0x12ebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebf8) {
            ctx->pc = 0x12EBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EBF8u;
            // 0x12ebfc: 0x8e250138  lw          $a1, 0x138($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC18u;
            return;
        }
    }
    ctx->pc = 0x12EC00u;
    // 0x12ec00: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x12EC00u;
    {
        const bool branch_taken_0x12ec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC00u;
        // 0x12ec04: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec00) {
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC08u;
}
