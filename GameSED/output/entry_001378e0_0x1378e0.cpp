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

// Function: entry_001378e0
// Address: 0x1378e0 - 0x137934
void entry_001378e0_0x1378e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001378e0_0x1378e0");
#endif

    ctx->pc = 0x1378e0u;

    // 0x1378e0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1378e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1378e4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x1378e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x1378e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1378e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1378ec: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1378ECu;
    {
        const bool branch_taken_0x1378ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378ECu;
        // 0x1378f0: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378ec) {
            ctx->pc = 0x137A54u;
            return;
        }
    }
    ctx->pc = 0x1378F4u;
    // 0x1378f4: 0x12570057  beq         $s2, $s7, . + 4 + (0x57 << 2)
    ctx->pc = 0x1378F4u;
    {
        const bool branch_taken_0x1378f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x1378F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378F4u;
        // 0x1378f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378f4) {
            ctx->pc = 0x137A54u;
            return;
        }
    }
    ctx->pc = 0x1378FCu;
    // 0x1378fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1378fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x137900: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x137900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x137904: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x137904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x137908: 0x242180a  movz        $v1, $s2, $v0
    ctx->pc = 0x137908u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x13790c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x13790Cu;
    {
        const bool branch_taken_0x13790c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13790c) {
            ctx->pc = 0x137910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13790Cu;
            // 0x137910: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137944u;
            return;
        }
    }
    ctx->pc = 0x137914u;
    // 0x137914: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x137914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x137918: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x137918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x13791c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13791Cu;
    {
        const bool branch_taken_0x13791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13791Cu;
        // 0x137920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13791c) {
            ctx->pc = 0x137934u;
            return;
        }
    }
    ctx->pc = 0x137924u;
    // 0x137924: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x137924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x137928: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x137928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13792c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13792Cu;
    {
        const bool branch_taken_0x13792c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13792c) {
            ctx->pc = 0x137938u;
            return;
        }
    }
    ctx->pc = 0x137934u;
}
