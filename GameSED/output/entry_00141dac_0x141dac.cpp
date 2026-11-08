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

// Function: entry_00141dac
// Address: 0x141dac - 0x141ddc
void entry_00141dac_0x141dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141dac_0x141dac");
#endif

    switch (ctx->pc) {
        case 0x141db8u: goto label_141db8;
        case 0x141dd4u: goto label_141dd4;
        default: break;
    }

    ctx->pc = 0x141dacu;

    // 0x141dac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x141dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x141db0: 0xc04fce4  jal         func_13F390
    ctx->pc = 0x141DB0u;
    SET_GPR_U32(ctx, 31, 0x141DB8u);
    ctx->pc = 0x141DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DB0u;
    // 0x141db4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x141DB0u, 0x141DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DB8u;
label_141db8:
    // 0x141db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dbc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x141dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dc0: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x141dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x141dc4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x141dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x141dc8: 0x231300b  movn        $a2, $s1, $s1
    ctx->pc = 0x141dc8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    // 0x141dcc: 0xc0505d2  jal         func_141748
    ctx->pc = 0x141DCCu;
    SET_GPR_U32(ctx, 31, 0x141DD4u);
    ctx->pc = 0x141DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DCCu;
    // 0x141dd0: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141748u, 0x141DCCu, 0x141DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DD4u;
label_141dd4:
    // 0x141dd4: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x141dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x141dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x141dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x141ddcu;
}
