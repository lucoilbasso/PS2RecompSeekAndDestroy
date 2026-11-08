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

// Function: entry_0014ace8
// Address: 0x14ace8 - 0x14ad28
void entry_0014ace8_0x14ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ace8_0x14ace8");
#endif

    ctx->pc = 0x14ace8u;

    // 0x14ace8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14acec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14acf0: 0x14570026  bne         $v0, $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x14ACF0u;
    {
        const bool branch_taken_0x14acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x14ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACF0u;
        // 0x14acf4: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acf0) {
            ctx->pc = 0x14AD8Cu;
            return;
        }
    }
    ctx->pc = 0x14ACF8u;
    // 0x14acf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14acf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acfc: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14ad00: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14AD00u;
    {
        const bool branch_taken_0x14ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ad00) {
            ctx->pc = 0x14AD8Cu;
            return;
        }
    }
    ctx->pc = 0x14AD08u;
    // 0x14ad08: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ad08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ad0c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14AD0Cu;
    {
        const bool branch_taken_0x14ad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD0Cu;
        // 0x14ad10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad0c) {
            ctx->pc = 0x14AD8Cu;
            return;
        }
    }
    ctx->pc = 0x14AD14u;
    // 0x14ad14: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x14ad14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad18: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x14ad18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x14ad1c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x14ad1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ad20: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x14ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x14ad24: 0x0  nop
    ctx->pc = 0x14ad24u;
    // NOP
    ctx->pc = 0x14ad28u;
}
