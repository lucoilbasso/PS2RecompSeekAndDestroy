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

// Function: entry_0014cff8
// Address: 0x14cff8 - 0x14d034
void entry_0014cff8_0x14cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cff8_0x14cff8");
#endif

    ctx->pc = 0x14cff8u;

    // 0x14cff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cffc: 0x8d040170  lw          $a0, 0x170($t0)
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 368)));
    // 0x14d000: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14d000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d004: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x14d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x14d008: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14d00c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x14D00Cu;
    {
        const bool branch_taken_0x14d00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d00c) {
            ctx->pc = 0x14D010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D00Cu;
            // 0x14d010: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D070u;
            return;
        }
    }
    ctx->pc = 0x14D014u;
    // 0x14d014: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x14d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x14d018: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x14d01c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D01Cu;
    {
        const bool branch_taken_0x14d01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D01Cu;
        // 0x14d020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d01c) {
            ctx->pc = 0x14D034u;
            return;
        }
    }
    ctx->pc = 0x14D024u;
    // 0x14d024: 0x8d020184  lw          $v0, 0x184($t0)
    ctx->pc = 0x14d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 388)));
    // 0x14d028: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14d02c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D02Cu;
    {
        const bool branch_taken_0x14d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d02c) {
            ctx->pc = 0x14D038u;
            return;
        }
    }
    ctx->pc = 0x14D034u;
}
