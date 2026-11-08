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

// Function: entry_001cfbf8
// Address: 0x1cfbf8 - 0x1cfc58
void entry_001cfbf8_0x1cfbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfbf8_0x1cfbf8");
#endif

    ctx->pc = 0x1cfbf8u;

    // 0x1cfbf8: 0x29420000  slti        $v0, $t2, 0x0
    ctx->pc = 0x1cfbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1cfbfc: 0x25450003  addiu       $a1, $t2, 0x3
    ctx->pc = 0x1cfbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x1cfc00: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1cfc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc04: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x1cfc04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x1cfc08: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1cfc08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1cfc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfc10: 0x2683e1b8  addiu       $v1, $s4, -0x1E48
    ctx->pc = 0x1cfc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
    // 0x1cfc14: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1cfc18: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x1cfc18u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cfc1c: 0x824814  dsllv       $t1, $v0, $a0
    ctx->pc = 0x1cfc1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1cfc20: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x1cfc20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1cfc24: 0x54600061  bnel        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1CFC24u;
    {
        const bool branch_taken_0x1cfc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc24) {
            ctx->pc = 0x1CFC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFC24u;
            // 0x1cfc28: 0x2684e1b8  addiu       $a0, $s4, -0x1E48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFDACu;
            return;
        }
    }
    ctx->pc = 0x1CFC2Cu;
    // 0x1cfc2c: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x1cfc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x1cfc30: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CFC30u;
    {
        const bool branch_taken_0x1cfc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC30u;
        // 0x1cfc34: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc30) {
            ctx->pc = 0x1CFC78u;
            return;
        }
    }
    ctx->pc = 0x1CFC38u;
    // 0x1cfc38: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1cfc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cfc3c: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x1cfc3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x1cfc40: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1cfc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1cfc44: 0x1261824  and         $v1, $t1, $a2
    ctx->pc = 0x1cfc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x1cfc48: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CFC48u;
    {
        const bool branch_taken_0x1cfc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC48u;
        // 0x1cfc4c: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc48) {
            ctx->pc = 0x1CFC74u;
            return;
        }
    }
    ctx->pc = 0x1CFC50u;
    // 0x1cfc50: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1cfc50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc54: 0x0  nop
    ctx->pc = 0x1cfc54u;
    // NOP
    ctx->pc = 0x1cfc58u;
}
