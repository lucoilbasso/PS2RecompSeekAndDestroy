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

// Function: entry_00156f3c
// Address: 0x156f3c - 0x156f84
void entry_00156f3c_0x156f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f3c_0x156f3c");
#endif

    switch (ctx->pc) {
        case 0x156f60u: goto label_156f60;
        case 0x156f6cu: goto label_156f6c;
        default: break;
    }

    ctx->pc = 0x156f3cu;

label_156f3c:
    // 0x156f3c: 0x8e050260  lw          $a1, 0x260($s0)
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_156f40:
    // 0x156f40: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_156f44:
    if (ctx->pc == 0x156F44u) {
        ctx->pc = 0x156F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F40u;
        // 0x156f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F48u;
        goto label_156f48;
    }
    ctx->pc = 0x156F40u;
    {
        const bool branch_taken_0x156f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F40u;
        // 0x156f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f40) {
            ctx->pc = 0x156F84u;
            return;
        }
    }
    ctx->pc = 0x156F48u;
label_156f48:
    // 0x156f48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_156f4c:
    // 0x156f4c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x156f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_156f50:
    // 0x156f50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_156f54:
    // 0x156f54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x156f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_156f58:
    // 0x156f58: 0x60f809  jalr        $v1
label_156f5c:
    if (ctx->pc == 0x156F5Cu) {
        ctx->pc = 0x156F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F58u;
        // 0x156f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F60u;
        goto label_156f60;
    }
    ctx->pc = 0x156F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156F60u);
        ctx->pc = 0x156F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F58u;
        // 0x156f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156F58u, 0x156F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156F60u;
label_156f60:
    // 0x156f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156f64:
    // 0x156f64: 0xc052f32  jal         func_14BCC8
label_156f68:
    if (ctx->pc == 0x156F68u) {
        ctx->pc = 0x156F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F64u;
        // 0x156f68: 0x8e050260  lw          $a1, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F6Cu;
        goto label_156f6c;
    }
    ctx->pc = 0x156F64u;
    SET_GPR_U32(ctx, 31, 0x156F6Cu);
    ctx->pc = 0x156F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F64u;
    // 0x156f68: 0x8e050260  lw          $a1, 0x260($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BCC8u, 0x156F64u, 0x156F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F6Cu;
label_156f6c:
    // 0x156f6c: 0x96020238  lhu         $v0, 0x238($s0)
    ctx->pc = 0x156f6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
label_156f70:
    // 0x156f70: 0x9603023a  lhu         $v1, 0x23A($s0)
    ctx->pc = 0x156f70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 570)));
label_156f74:
    // 0x156f74: 0x8e04023c  lw          $a0, 0x23C($s0)
    ctx->pc = 0x156f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_156f78:
    // 0x156f78: 0xa6020284  sh          $v0, 0x284($s0)
    ctx->pc = 0x156f78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 644), (uint16_t)GPR_U32(ctx, 2));
label_156f7c:
    // 0x156f7c: 0xa6030286  sh          $v1, 0x286($s0)
    ctx->pc = 0x156f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 646), (uint16_t)GPR_U32(ctx, 3));
label_156f80:
    // 0x156f80: 0xae040280  sw          $a0, 0x280($s0)
    ctx->pc = 0x156f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 4));
    ctx->pc = 0x156f84u;
}
