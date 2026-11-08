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

// Function: entry_00113fb0
// Address: 0x113fb0 - 0x114008
void entry_00113fb0_0x113fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113fb0_0x113fb0");
#endif

    ctx->pc = 0x113fb0u;

    // 0x113fb0: 0x62027  nor         $a0, $zero, $a2
    ctx->pc = 0x113fb0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x113fb4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x113fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113fb8: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x113fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113fbc: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x113fbcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x113fc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x113fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x113fc4: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x113fc8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113fd0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x113fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x113fd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x113fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113fd8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x113fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x113fdc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x113FDCu;
    {
        const bool branch_taken_0x113fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FDCu;
        // 0x113fe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fdc) {
            ctx->pc = 0x114044u;
            return;
        }
    }
    ctx->pc = 0x113FE4u;
    // 0x113fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113fe8: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x113FE8u;
    {
        const bool branch_taken_0x113fe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x113FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE8u;
        // 0x113fec: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fe8) {
            ctx->pc = 0x114028u;
            return;
        }
    }
    ctx->pc = 0x113FF0u;
    // 0x113ff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113FF0u;
    {
        const bool branch_taken_0x113ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FF0u;
        // 0x113ff4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ff0) {
            ctx->pc = 0x114008u;
            return;
        }
    }
    ctx->pc = 0x113FF8u;
    // 0x113ff8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x113FF8u;
    {
        const bool branch_taken_0x113ff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FF8u;
        // 0x113ffc: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ff8) {
            ctx->pc = 0x114020u;
            return;
        }
    }
    ctx->pc = 0x114000u;
    // 0x114000: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x114000u;
    {
        const bool branch_taken_0x114000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114000u;
        // 0x114004: 0x24468000  addiu       $a2, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114000) {
            ctx->pc = 0x114044u;
            return;
        }
    }
    ctx->pc = 0x114008u;
}
