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

// Function: entry_00101c24
// Address: 0x101c24 - 0x101cb0
void entry_00101c24_0x101c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101c24_0x101c24");
#endif

    switch (ctx->pc) {
        case 0x101c34u: goto label_101c34;
        default: break;
    }

    ctx->pc = 0x101c24u;

    // 0x101c24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x101c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c2c: 0xc04039c  jal         func_100E70
    ctx->pc = 0x101C2Cu;
    SET_GPR_U32(ctx, 31, 0x101C34u);
    ctx->pc = 0x101C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C2Cu;
    // 0x101c30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x101C2Cu, 0x101C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C34u;
label_101c34:
    // 0x101c34: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x101c34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101c38: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x101c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x101c3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x101c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101c44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101c48: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x101c48u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x101c4c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101c54: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101c58: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x101c58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x101c5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x101c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101c64: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x101c64u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x101c68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101c6c: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x101c6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101c70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101c70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101c74: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x101c74u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
    // 0x101c78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101c7c: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x101c7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x101c80: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x101c80u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x101c84: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x101c84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x101c88: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x101c88u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x101c8c: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x101c8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101c90: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x101c90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x101c94: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x101c94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x101c98: 0xfd030030  sd          $v1, 0x30($t0)
    ctx->pc = 0x101c98u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 3));
    // 0x101c9c: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x101c9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x101ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ca4: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x101ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    // 0x101ca8: 0x8040438  j           func_1010E0
    ctx->pc = 0x101CA8u;
    ctx->pc = 0x101CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CA8u;
    // 0x101cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010E0u;
    ImagePageInfoLoad__9ApcObjRscP10WImageInfoii_0x1010e0(rdram, ctx, runtime); return;
    ctx->pc = 0x101CB0u;
}
