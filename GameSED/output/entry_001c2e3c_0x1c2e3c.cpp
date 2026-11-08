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

// Function: entry_001c2e3c
// Address: 0x1c2e3c - 0x1c2ec4
void entry_001c2e3c_0x1c2e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2e3c_0x1c2e3c");
#endif

    ctx->pc = 0x1c2e3cu;

    // 0x1c2e3c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1c2e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e40: 0xdce30828  ld          $v1, 0x828($a3)
    ctx->pc = 0x1c2e40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2088)));
    // 0x1c2e44: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x1c2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1c2e48: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x1c2e48u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x1c2e4c: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x1c2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x1c2e50: 0xdce30830  ld          $v1, 0x830($a3)
    ctx->pc = 0x1c2e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x1c2e54: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x1c2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c2e58: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x1c2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x1c2e5c: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x1c2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x1c2e60: 0x8ce3013c  lw          $v1, 0x13C($a3)
    ctx->pc = 0x1c2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 316)));
    // 0x1c2e64: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x1c2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x1c2e68: 0x8ce40188  lw          $a0, 0x188($a3)
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x1c2e6c: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x1c2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x1c2e70: 0x8ce30178  lw          $v1, 0x178($a3)
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1c2e74: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x1c2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x1c2e78: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x1c2e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x1c2e7c: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x1c2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x1c2e80: 0x8ce3018c  lw          $v1, 0x18C($a3)
    ctx->pc = 0x1c2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x1c2e84: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x1c2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x1c2e88: 0x8ce40190  lw          $a0, 0x190($a3)
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x1c2e8c: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x1c2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x1c2e90: 0x8ce30194  lw          $v1, 0x194($a3)
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x1c2e94: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x1c2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x1c2e98: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x1c2e9c: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x1c2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x1c2ea0: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x1c2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x1c2ea4: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x1c2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x1c2ea8: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x1c2eac: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x1c2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x1c2eb0: 0x8ce30148  lw          $v1, 0x148($a3)
    ctx->pc = 0x1c2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x1c2eb4: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x1c2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x1c2eb8: 0x8ce4014c  lw          $a0, 0x14C($a3)
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x1c2ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EBCu;
        // 0x1c2ec0: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2EC4u;
}
