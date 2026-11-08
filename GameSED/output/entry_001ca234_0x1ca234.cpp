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

// Function: entry_001ca234
// Address: 0x1ca234 - 0x1ca260
void entry_001ca234_0x1ca234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca234_0x1ca234");
#endif

    ctx->pc = 0x1ca234u;

    // 0x1ca234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca238: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1ca238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1ca23c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1ca23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ca240: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA240u;
    {
        const bool branch_taken_0x1ca240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA240u;
        // 0x1ca244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca240) {
            ctx->pc = 0x1CA288u;
            return;
        }
    }
    ctx->pc = 0x1CA248u;
    // 0x1ca248: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ca24c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1ca24cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ca250: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1ca250u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1ca254: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca258: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ca258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca25c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1ca25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    ctx->pc = 0x1ca260u;
}
