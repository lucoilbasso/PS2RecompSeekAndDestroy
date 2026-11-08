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

// Function: entry_00101d50
// Address: 0x101d50 - 0x101dc0
void entry_00101d50_0x101d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101d50_0x101d50");
#endif

    switch (ctx->pc) {
        case 0x101d60u: goto label_101d60;
        case 0x101dbcu: goto label_101dbc;
        default: break;
    }

    ctx->pc = 0x101d50u;

    // 0x101d50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d58: 0xc04039c  jal         func_100E70
    ctx->pc = 0x101D58u;
    SET_GPR_U32(ctx, 31, 0x101D60u);
    ctx->pc = 0x101D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D58u;
    // 0x101d5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x101D58u, 0x101D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D60u;
label_101d60:
    // 0x101d60: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x101d60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101d64: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x101d64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x101d68: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101d6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d70: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101d74: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x101d74u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x101d78: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d80: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x101d80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x101d84: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x101d84u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x101d88: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x101d88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101d8c: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x101d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
    // 0x101d90: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x101d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x101d94: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x101d94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x101d98: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x101d98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101d9c: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x101d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x101da0: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x101da0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101da4: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x101da4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x101da8: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x101da8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x101dac: 0xfd030030  sd          $v1, 0x30($t0)
    ctx->pc = 0x101dacu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 3));
    // 0x101db0: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x101db0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x101db4: 0xc040438  jal         func_1010E0
    ctx->pc = 0x101DB4u;
    SET_GPR_U32(ctx, 31, 0x101DBCu);
    ctx->pc = 0x101DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DB4u;
    // 0x101db8: 0xfd020038  sd          $v0, 0x38($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010E0u, 0x101DB4u, 0x101DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DBCu;
label_101dbc:
    // 0x101dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x101dc0u;
}
