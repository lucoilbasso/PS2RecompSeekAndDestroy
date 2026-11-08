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

// Function: entry_00142578
// Address: 0x142578 - 0x1425c0
void entry_00142578_0x142578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142578_0x142578");
#endif

    switch (ctx->pc) {
        case 0x142594u: goto label_142594;
        default: break;
    }

    ctx->pc = 0x142578u;

    // 0x142578: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x142578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14257c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14257cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x142580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142584: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142588: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14258c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14258Cu;
    SET_GPR_U32(ctx, 31, 0x142594u);
    ctx->pc = 0x142590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14258Cu;
    // 0x142590: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14258Cu, 0x142594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142594u;
label_142594:
    // 0x142594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142598: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x142598u;
    {
        const bool branch_taken_0x142598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142598u;
        // 0x14259c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142598) {
            ctx->pc = 0x1425C0u;
            return;
        }
    }
    ctx->pc = 0x1425A0u;
    // 0x1425a0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1425a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1425a4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1425a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1425a8: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x1425a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x1425ac: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1425ACu;
    {
        const bool branch_taken_0x1425ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1425ac) {
            ctx->pc = 0x1425B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1425ACu;
            // 0x1425b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1425C4u;
            return;
        }
    }
    ctx->pc = 0x1425B4u;
    // 0x1425b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1425B4u;
    {
        const bool branch_taken_0x1425b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1425B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425B4u;
        // 0x1425b8: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425b4) {
            ctx->pc = 0x1425C4u;
            return;
        }
    }
    ctx->pc = 0x1425BCu;
    // 0x1425bc: 0x0  nop
    ctx->pc = 0x1425bcu;
    // NOP
    ctx->pc = 0x1425c0u;
}
