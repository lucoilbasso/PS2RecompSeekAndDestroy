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

// Function: entry_001bd410
// Address: 0x1bd410 - 0x1bd480
void entry_001bd410_0x1bd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd410_0x1bd410");
#endif

    ctx->pc = 0x1bd410u;

    // 0x1bd410: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1bd410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x1bd414: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd418: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD418u;
    {
        const bool branch_taken_0x1bd418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd418) {
            ctx->pc = 0x1BD480u;
            return;
        }
    }
    ctx->pc = 0x1BD420u;
    // 0x1bd420: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1bd420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1bd424: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd428: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD428u;
    {
        const bool branch_taken_0x1bd428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd428) {
            ctx->pc = 0x1BD488u;
            return;
        }
    }
    ctx->pc = 0x1BD430u;
    // 0x1bd430: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1bd430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1bd434: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd438: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD438u;
    {
        const bool branch_taken_0x1bd438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd438) {
            ctx->pc = 0x1BD480u;
            return;
        }
    }
    ctx->pc = 0x1BD440u;
    // 0x1bd440: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1bd440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x1bd444: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd448: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD448u;
    {
        const bool branch_taken_0x1bd448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd448) {
            ctx->pc = 0x1BD480u;
            return;
        }
    }
    ctx->pc = 0x1BD450u;
    // 0x1bd450: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1bd450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1bd454: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd458: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD458u;
    {
        const bool branch_taken_0x1bd458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd458) {
            ctx->pc = 0x1BD480u;
            return;
        }
    }
    ctx->pc = 0x1BD460u;
    // 0x1bd460: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1bd460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x1bd464: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd468: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD468u;
    {
        const bool branch_taken_0x1bd468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd468) {
            ctx->pc = 0x1BD480u;
            return;
        }
    }
    ctx->pc = 0x1BD470u;
    // 0x1bd470: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1bd470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1bd474: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd478: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD478u;
    {
        const bool branch_taken_0x1bd478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd478) {
            ctx->pc = 0x1BD4D0u;
            return;
        }
    }
    ctx->pc = 0x1BD480u;
}
