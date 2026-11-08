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

// Function: entry_00128048
// Address: 0x128048 - 0x128068
void entry_00128048_0x128048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128048_0x128048");
#endif

    ctx->pc = 0x128048u;

    // 0x128048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x128048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12804c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x128050: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x128050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x128054: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x128054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x128058: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x128058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x12805c: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x12805cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x128060: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x128060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x128064: 0xe6020040  swc1        $f2, 0x40($s0)
    ctx->pc = 0x128064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->pc = 0x128068u;
}
