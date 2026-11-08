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

// Function: entry_0012de80
// Address: 0x12de80 - 0x12dedc
void entry_0012de80_0x12de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012de80_0x12de80");
#endif

    switch (ctx->pc) {
        case 0x12ded0u: goto label_12ded0;
        default: break;
    }

    ctx->pc = 0x12de80u;

    // 0x12de80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12de80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12de84: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x12de84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x12de88: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x12de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x12de8c: 0xe454002c  swc1        $f20, 0x2C($v0)
    ctx->pc = 0x12de8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x12de90: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x12de90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x12de94: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x12de94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x12de98: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x12de98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x12de9c: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x12de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dea0: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x12dea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dea4: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x12dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x12dea8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12deac: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x12deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x12deb0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12deb4: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x12deb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x12deb8: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x12deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x12debc: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x12debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x12dec0: 0xe61400d4  swc1        $f20, 0xD4($s0)
    ctx->pc = 0x12dec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12dec4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x12dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x12dec8: 0xc048424  jal         func_121090
    ctx->pc = 0x12DEC8u;
    SET_GPR_U32(ctx, 31, 0x12DED0u);
    ctx->pc = 0x12DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DEC8u;
    // 0x12decc: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12DEC8u, 0x12DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DED0u;
label_12ded0:
    // 0x12ded0: 0xae1000b4  sw          $s0, 0xB4($s0)
    ctx->pc = 0x12ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 16));
    // 0x12ded4: 0xe6140138  swc1        $f20, 0x138($s0)
    ctx->pc = 0x12ded4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x12ded8: 0xe6140124  swc1        $f20, 0x124($s0)
    ctx->pc = 0x12ded8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x12dedcu;
}
