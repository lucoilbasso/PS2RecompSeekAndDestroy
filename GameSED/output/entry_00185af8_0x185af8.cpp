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

// Function: entry_00185af8
// Address: 0x185af8 - 0x185b30
void entry_00185af8_0x185af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185af8_0x185af8");
#endif

    ctx->pc = 0x185af8u;

    // 0x185af8: 0x1222007f  beq         $s1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x185AF8u;
    {
        const bool branch_taken_0x185af8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF8u;
        // 0x185afc: 0x2a220041  slti        $v0, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185af8) {
            ctx->pc = 0x185CF8u;
            return;
        }
    }
    ctx->pc = 0x185B00u;
    // 0x185b00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x185B00u;
    {
        const bool branch_taken_0x185b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B00u;
        // 0x185b04: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b00) {
            ctx->pc = 0x185B40u;
            return;
        }
    }
    ctx->pc = 0x185B08u;
    // 0x185b08: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x185b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x185b0c: 0x122200e2  beq         $s1, $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x185B0Cu;
    {
        const bool branch_taken_0x185b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B0Cu;
        // 0x185b10: 0x2a220031  slti        $v0, $s1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b0c) {
            ctx->pc = 0x185E98u;
            return;
        }
    }
    ctx->pc = 0x185B14u;
    // 0x185b14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x185B14u;
    {
        const bool branch_taken_0x185b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B14u;
        // 0x185b18: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b14) {
            ctx->pc = 0x185B30u;
            return;
        }
    }
    ctx->pc = 0x185B1Cu;
    // 0x185b1c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x185b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x185b20: 0x12220053  beq         $s1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x185B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B20u;
        // 0x185b24: 0x26060038  addiu       $a2, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185C70u;
            return;
        }
    }
    ctx->pc = 0x185B28u;
    // 0x185b28: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x185B28u;
    {
        const bool branch_taken_0x185b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B28u;
        // 0x185b2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b28) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185B30u;
}
