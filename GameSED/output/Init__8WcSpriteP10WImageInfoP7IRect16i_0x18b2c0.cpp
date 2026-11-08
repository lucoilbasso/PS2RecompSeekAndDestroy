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

// Function: Init__8WcSpriteP10WImageInfoP7IRect16i
// Address: 0x18b2c0 - 0x18b330
void Init__8WcSpriteP10WImageInfoP7IRect16i_0x18b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8WcSpriteP10WImageInfoP7IRect16i_0x18b2c0");
#endif

    switch (ctx->pc) {
        case 0x18b2ecu: goto label_18b2ec;
        case 0x18b314u: goto label_18b314;
        default: break;
    }

    ctx->pc = 0x18b2c0u;

    // 0x18b2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18b2c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18b2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18b2d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18b2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18b2d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18b2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18b2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18b2e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18b2e4: 0xc061258  jal         func_184960
    ctx->pc = 0x18B2E4u;
    SET_GPR_U32(ctx, 31, 0x18B2ECu);
    ctx->pc = 0x18B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B2E4u;
    // 0x18b2e8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x18B2E4u, 0x18B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2ECu;
label_18b2ec:
    // 0x18b2ec: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x18b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x18b2f0: 0xa6000200  sh          $zero, 0x200($s0)
    ctx->pc = 0x18b2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b2f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18b2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2fc: 0xa6000202  sh          $zero, 0x202($s0)
    ctx->pc = 0x18b2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 514), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b300: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b304: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x18b304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x18b308: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18b308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b30c: 0xc062ccc  jal         func_18B330
    ctx->pc = 0x18B30Cu;
    SET_GPR_U32(ctx, 31, 0x18B314u);
    ctx->pc = 0x18B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B30Cu;
    // 0x18b310: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B330u, 0x18B30Cu, 0x18B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B314u;
label_18b314:
    // 0x18b314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18b318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b31c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18b31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b320: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18b320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18b324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b328: 0x3e00008  jr          $ra
    ctx->pc = 0x18B328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B328u;
        // 0x18b32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B330u;
}
