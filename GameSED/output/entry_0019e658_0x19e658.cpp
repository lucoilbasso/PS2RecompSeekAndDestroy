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

// Function: entry_0019e658
// Address: 0x19e658 - 0x19e680
void entry_0019e658_0x19e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e658_0x19e658");
#endif

    ctx->pc = 0x19e658u;

    // 0x19e658: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19e658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19e65c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19e660: 0xc7948624  lwc1        $f20, -0x79DC($gp)
    ctx->pc = 0x19e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e668: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19e668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e670: 0x2451f640  addiu       $s1, $v0, -0x9C0
    ctx->pc = 0x19e670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x19e674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19e678: 0x24127fff  addiu       $s2, $zero, 0x7FFF
    ctx->pc = 0x19e678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x19e67c: 0x0  nop
    ctx->pc = 0x19e67cu;
    // NOP
    ctx->pc = 0x19e680u;
}
