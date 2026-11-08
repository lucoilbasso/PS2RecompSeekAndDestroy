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

// Function: entry_00136fb0
// Address: 0x136fb0 - 0x136ff8
void entry_00136fb0_0x136fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136fb0_0x136fb0");
#endif

    ctx->pc = 0x136fb0u;

    // 0x136fb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x136fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136fb4: 0x1242014b  beq         $s2, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x136FB4u;
    {
        const bool branch_taken_0x136fb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x136FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FB4u;
        // 0x136fb8: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fb4) {
            ctx->pc = 0x1374E4u;
            return;
        }
    }
    ctx->pc = 0x136FBCu;
    // 0x136fbc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x136fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x136fc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136fc8: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x136fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
    // 0x136fcc: 0x242380a  movz        $a3, $s2, $v0
    ctx->pc = 0x136fccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x136fd0: 0x50e0000d  beql        $a3, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x136FD0u;
    {
        const bool branch_taken_0x136fd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fd0) {
            ctx->pc = 0x136FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136FD0u;
            // 0x136fd4: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137008u;
            return;
        }
    }
    ctx->pc = 0x136FD8u;
    // 0x136fd8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x136fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x136fdc: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x136fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x136fe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136FE0u;
    {
        const bool branch_taken_0x136fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FE0u;
        // 0x136fe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fe0) {
            ctx->pc = 0x136FF8u;
            return;
        }
    }
    ctx->pc = 0x136FE8u;
    // 0x136fe8: 0x8ce20184  lw          $v0, 0x184($a3)
    ctx->pc = 0x136fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x136fec: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x136fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x136ff0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x136FF0u;
    {
        const bool branch_taken_0x136ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ff0) {
            ctx->pc = 0x136FFCu;
            return;
        }
    }
    ctx->pc = 0x136FF8u;
}
