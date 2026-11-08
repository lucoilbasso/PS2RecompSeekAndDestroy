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

// Function: entry_001bd3ac
// Address: 0x1bd3ac - 0x1bd3f8
void entry_001bd3ac_0x1bd3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3ac_0x1bd3ac");
#endif

    switch (ctx->pc) {
        case 0x1bd3e0u: goto label_1bd3e0;
        default: break;
    }

    ctx->pc = 0x1bd3acu;

    // 0x1bd3ac: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x1bd3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x1bd3b0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1bd3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1bd3b4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bd3b8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1bd3b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd3bc: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bd3c0: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x1bd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x1bd3c4: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x1bd3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x1bd3c8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1bd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1bd3cc: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD3CCu;
    {
        const bool branch_taken_0x1bd3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3CCu;
        // 0x1bd3d0: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3cc) {
            ctx->pc = 0x1BD3F8u;
            return;
        }
    }
    ctx->pc = 0x1BD3D4u;
    // 0x1bd3d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3d8: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD3D8u;
    SET_GPR_U32(ctx, 31, 0x1BD3E0u);
    ctx->pc = 0x1BD3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3D8u;
    // 0x1bd3dc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD3D8u, 0x1BD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3E0u;
label_1bd3e0:
    // 0x1bd3e0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1bd3e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd3e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd3e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd3ec: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x1bd3f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bd3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd3f4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1bd3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1bd3f8u;
}
