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

// Function: entry_001c9780
// Address: 0x1c9780 - 0x1c97b8
void entry_001c9780_0x1c9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9780_0x1c9780");
#endif

    ctx->pc = 0x1c9780u;

    // 0x1c9780: 0x130000ac  beqz        $t8, . + 4 + (0xAC << 2)
    ctx->pc = 0x1C9780u;
    {
        const bool branch_taken_0x1c9780 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9780u;
        // 0x1c9784: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9780) {
            ctx->pc = 0x1C9A34u;
            return;
        }
    }
    ctx->pc = 0x1C9788u;
    // 0x1c9788: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1c9788u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c978c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c9790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9798: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c9798u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c979c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c97a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c97a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c97a8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c97a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c97ac: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1C97ACu;
    {
        const bool branch_taken_0x1c97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97ACu;
        // 0x1c97b0: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97ac) {
            ctx->pc = 0x1C9A30u;
            return;
        }
    }
    ctx->pc = 0x1C97B4u;
    // 0x1c97b4: 0x0  nop
    ctx->pc = 0x1c97b4u;
    // NOP
    ctx->pc = 0x1c97b8u;
}
