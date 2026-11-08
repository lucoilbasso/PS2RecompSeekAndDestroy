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

// Function: entry_001c8990
// Address: 0x1c8990 - 0x1c89e0
void entry_001c8990_0x1c8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8990_0x1c8990");
#endif

    ctx->pc = 0x1c8990u;

    // 0x1c8990: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1c8990u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c8994: 0x8683c  dsll32      $t5, $t0, 0
    ctx->pc = 0x1c8994u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1c8998: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1c8998u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1c899c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1c899cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c89a0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x1c89a0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x1c89a4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1c89a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c89a8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1c89a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1c89ac: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1C89ACu;
    {
        const bool branch_taken_0x1c89ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89ACu;
        // 0x1c89b0: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89ac) {
            ctx->pc = 0x1C8C70u;
            return;
        }
    }
    ctx->pc = 0x1C89B4u;
    // 0x1c89b4: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1c89b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c89b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C89B8u;
    {
        const bool branch_taken_0x1c89b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89B8u;
        // 0x1c89bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89b8) {
            ctx->pc = 0x1C8A38u;
            return;
        }
    }
    ctx->pc = 0x1C89C0u;
    // 0x1c89c0: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c89c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c89c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C89C4u;
    {
        const bool branch_taken_0x1c89c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89C4u;
        // 0x1c89c8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89c4) {
            ctx->pc = 0x1C89E0u;
            return;
        }
    }
    ctx->pc = 0x1C89CCu;
    // 0x1c89cc: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1c89ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c89d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c89d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C89D4u;
    {
        const bool branch_taken_0x1c89d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89D4u;
        // 0x1c89d8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89d4) {
            ctx->pc = 0x1C89F4u;
            return;
        }
    }
    ctx->pc = 0x1C89DCu;
    // 0x1c89dc: 0x0  nop
    ctx->pc = 0x1c89dcu;
    // NOP
    ctx->pc = 0x1c89e0u;
}
