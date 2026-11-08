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

// Function: entry_001a4a18
// Address: 0x1a4a18 - 0x1a4a4c
void entry_001a4a18_0x1a4a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4a18_0x1a4a18");
#endif

    switch (ctx->pc) {
        case 0x1a4a28u: goto label_1a4a28;
        default: break;
    }

    ctx->pc = 0x1a4a18u;

    // 0x1a4a18: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a4a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4a20: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A4A20u;
    SET_GPR_U32(ctx, 31, 0x1A4A28u);
    ctx->pc = 0x1A4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A20u;
    // 0x1a4a24: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4A20u, 0x1A4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A28u;
label_1a4a28:
    // 0x1a4a28: 0xa4510004  sh          $s1, 0x4($v0)
    ctx->pc = 0x1a4a28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a4a2c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a4a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a4a30: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1a4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1a4a34: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1a4a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a4a38: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1a4a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a4a3c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a4a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a40: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1a4a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1a4a44: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4A44u;
    {
        const bool branch_taken_0x1a4a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A44u;
        // 0x1a4a48: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a44) {
            ctx->pc = 0x1A4A58u;
            return;
        }
    }
    ctx->pc = 0x1A4A4Cu;
}
