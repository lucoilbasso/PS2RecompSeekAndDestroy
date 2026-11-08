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

// Function: entry_0017c364
// Address: 0x17c364 - 0x17c38c
void entry_0017c364_0x17c364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c364_0x17c364");
#endif

    ctx->pc = 0x17c364u;

    // 0x17c364: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x17c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c368: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17c368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c36c: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x17c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x17c370: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x17c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x17c374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c378: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x17c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17c37c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c380: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17c380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17c384: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x17c384u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17c388: 0xac31c050  sw          $s1, -0x3FB0($at)
    ctx->pc = 0x17c388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950992), GPR_U32(ctx, 17));
    ctx->pc = 0x17c38cu;
}
