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

// Function: sceVif1PkRef
// Address: 0x1aec18 - 0x1aecb0
void sceVif1PkRef_0x1aec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVif1PkRef_0x1aec18");
#endif

    switch (ctx->pc) {
        case 0x1aec54u: goto label_1aec54;
        default: break;
    }

    ctx->pc = 0x1aec18u;

    // 0x1aec18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1aec18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1aec1c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1aec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1aec20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1aec20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec24: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1aec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1aec28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1aec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1aec2c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1aec2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1aec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1aec34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1aec34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1aec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1aec3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aec3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aec44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1aec44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1aec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1aec4c: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x1AEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC54u);
    ctx->pc = 0x1AEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC4Cu;
    // 0x1aec50: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x1AEC4Cu, 0x1AEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC54u;
label_1aec54:
    // 0x1aec54: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1aec54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1aec58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1aec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1aec5c: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x1aec5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x1aec60: 0x3c039fff  lui         $v1, 0x9FFF
    ctx->pc = 0x1aec60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40959 << 16));
    // 0x1aec64: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x1aec64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1aec68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1aec68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1aec6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1aec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1aec70: 0x2439024  and         $s2, $s2, $v1
    ctx->pc = 0x1aec70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x1aec74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1aec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1aec78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1aec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aec7c: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x1aec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1aec80: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1aec80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1aec84: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1aec84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1aec88: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x1aec88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x1aec8c: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x1aec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x1aec90: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1aec90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aec94: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1aec94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aec98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1aec98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aec9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aec9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeca0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aeca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aeca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AECA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECA8u;
        // 0x1aecac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AECA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AECB0u;
}
