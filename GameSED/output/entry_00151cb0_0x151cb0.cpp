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

// Function: entry_00151cb0
// Address: 0x151cb0 - 0x151cd8
void entry_00151cb0_0x151cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151cb0_0x151cb0");
#endif

    ctx->pc = 0x151cb0u;

    // 0x151cb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x151cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x151cb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151CB4u;
    {
        const bool branch_taken_0x151cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CB4u;
        // 0x151cb8: 0x8e4203b0  lw          $v0, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cb4) {
            ctx->pc = 0x151CD8u;
            return;
        }
    }
    ctx->pc = 0x151CBCu;
    // 0x151cbc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x151cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x151cc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x151CC0u;
    {
        const bool branch_taken_0x151cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CC0u;
        // 0x151cc4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cc0) {
            ctx->pc = 0x151CF8u;
            return;
        }
    }
    ctx->pc = 0x151CC8u;
    // 0x151cc8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x151cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x151ccc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151CCCu;
    {
        const bool branch_taken_0x151ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CCCu;
        // 0x151cd0: 0x24439cf0  addiu       $v1, $v0, -0x6310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ccc) {
            ctx->pc = 0x151CFCu;
            return;
        }
    }
    ctx->pc = 0x151CD4u;
    // 0x151cd4: 0x0  nop
    ctx->pc = 0x151cd4u;
    // NOP
    ctx->pc = 0x151cd8u;
}
